#include "Wanderers.hpp"
#include <iostream>
void Wanderers::freeWanderers(){
    // free all wanderers
    for(int i = 0; i < _wanderers.size(); i++){
        delete(_wanderers[i]);
    }
    _wanderers.clear();
}

void Wanderers::reset(RectSpawn & _dynamicSpawn){
    if(_wanderers.size() > 0) freeWanderers();
    // adding a human wanderers
    for(int i = 0; i < _SETTINGS->stage.num_dynamic_obstacles; i++){
        b2Vec2 p;
		_dynamicSpawn.getRandomPoint(p);
        _wanderers.push_back(new WandererBipedal(_levelDef.world, p, 
                                                _SETTINGS->stage.obstacle_speed,
                                                0.1, 0.05, 60.0f, WANDERER_ID_HUMAN));
    }
    //reset all lists
    _last_infos_of_wanderers.clear();
    _last_observed_wanderers.clear();
    _infos_of_wanderers.clear();
    _observed_wanderers.clear();
    velocity_linear_h = _SETTINGS->stage.obstacle_speed;
    velocity_angle_h = 0.f;

    calculateDistanceAngle();
    getClosestWanderers();
}

void Wanderers::update(){
    b2Vec2 position;
    for(int i = 0; i < _wanderers.size(); i++){
        //check if wanderers are near each other -> stop both wanderers as they start chatting
        bool chat_flag = false;
        float radius_check = 0.3;
        for(int j = 0; j < _wanderers.size(); j++){
            if(i == j){
                continue;
            }
            float distance = (_wanderers[i]->getPosition() - _wanderers[j]->getPosition()).Length();
            //printf("Radius %f \n", (*it)->getRadius());

            if ( distance < radius_check) {
                chat_flag = true;
                break;
            }
        }

        //check if wanderer is out of border
        position = _wanderers[i]->getPosition();

        b2Vec2 new_position = position;
        float border = _SETTINGS->stage.level_size / 2.f;
        float radius = _wanderers[i]->getRadius();
        float bound = border - radius;
        if(abs(position.x) > bound || abs(position.y) > bound ) {
            if((position.x) > bound) {
                new_position.x = bound;
            }
            if((position.x) < -bound){
                new_position.x = -bound;
            }
            if((position.y) > bound){
                new_position.y = bound;
            }
            if((position.y) < -bound){
                new_position.y = -bound;
            }
            _wanderers[i]->setPosition(new_position);
        }
        //update wanderer position and velocity
        _wanderers[i]->update(chat_flag);
    }

    calculateDistanceAngle();
    getClosestWanderers();
}

void Wanderers::calculateDistanceAngle(){
    //clear and update all observation vectors of wanderers
    _last_infos_of_wanderers.clear();
    _last_observed_wanderers.clear();
    _last_infos_of_wanderers = _infos_of_wanderers;
    _last_observed_wanderers = _observed_wanderers;
    _infos_of_wanderers.clear();
    _observed_wanderers.clear();
    //_distance_evaluation.clear();

    //calculate distance and angle of all wanderers relativ to robot
    for(int i = 0; i < _wanderers.size(); i++){
        //b2Transform robot_transform = _levelDef.robot->getBody()->GetTransform();

        // calculate distance from (_wanderers[i]+safetyDistance) to robot
        //b2Vec2 robot_to_wanderer = _wanderers[i]->getPosition() - robot_transform.p;
        //float dist = robot_to_wanderer.Length() - _levelDef.robot->getRadius() - _wanderers[i]->getRadius();
        
        //calculate angle of wanderer relativ to the robots facing direction
        //zVector2D robot_facing(0, 1);
        //robot_facing.rotate(robot_transform.q.GetAngle());// robot facing vector
        //float angle = f_deg(zVector2D::signedAngle(robot_facing, zVector2D(robot_to_wanderer.x, robot_to_wanderer.y)));// angle between robot facing vector and robot to wanderer
        
        b2Vec2 _wanderers_pos = _levelDef.robot->getBody()->GetLocalPoint(_wanderers[i]->getPosition());
        
        float dist = _wanderers_pos.Length()- _levelDef.robot->getRadius() - _wanderers[i]->getRadius();
	float angle = f_deg(zVector2D::signedAngle(zVector2D(0, 1), zVector2D(_wanderers_pos.x, _wanderers_pos.y)));
        if(_last_infos_of_wanderers.size()!=0){
              get_velocities(velocity_linear_h,velocity_angle_h,i,dist, angle);
        }
        _infos_of_wanderers.push_back(WandererInfo(i, dist, angle,velocity_linear_h,velocity_angle_h));

    }

}

void Wanderers::getClosestWanderers(){
    //sort by distances
    _infos_of_wanderers.sort();
    //Get only Wanderers inside the camera view
    //float half_camera_angle = _SETTINGS->robot.camera_angle/2.;
    int i = 0;
    for(std::list<WandererInfo>::iterator it = _infos_of_wanderers.begin(); it != _infos_of_wanderers.end(); it++){
        if(i < _SETTINGS->training.num_obs_humans){
            //if(it->angle < half_camera_angle && it->angle > -half_camera_angle){
            _observed_wanderers.push_back(*it);
            i++;
            //}
        }
    }
    
}
/*
void Wanderers::get_last_observed_distances(std::vector<float> & last_distance,std::vector<float> & last_angle){
    for(int i = 0; i < _last_observed_wanderers.size(); i++){
        last_distance.push_back(_last_observed_wanderers[i].distance);
        last_angle.push_back(_last_observed_wanderers[i].angle);
    }
}

void Wanderers::get_observed_distances(std::vector<float> & distance,std::vector<float> & angle){
    for(int i = 0; i < _last_observed_wanderers.size(); i++){
        for(std::list<WandererInfo>::iterator it = _infos_of_wanderers.begin(); it != _infos_of_wanderers.end(); it++){
            if(it->index == _last_observed_wanderers[i].index){
                distance.push_back(it->distance);
                angle.push_back(it->angle);
            }
        }
    }
}
*/
void Wanderers::get_velocities(float & velocity_linear,float & velocity_angle,int i,float dist,float angle){
   
        for(std::list<WandererInfo>::iterator it = _last_infos_of_wanderers.begin(); it != _last_infos_of_wanderers.end(); it++){
            if(it->index == i){
                velocity_linear=fabs(it->distance-dist)/_SETTINGS->physics.time_step;
                velocity_angle==fabs(it->angle-angle)/_SETTINGS->physics.time_step;
            }
        }
    
}
/*
void Wanderers::get_last_distances(std::vector<float> & last_distance){
    for(std::list<WandererInfo>::iterator it_last = _last_infos_of_wanderers.begin(); it_last != _last_infos_of_wanderers.end(); it_last++){
        last_distance.push_back(it_last->distance);
    }
}

void Wanderers::get_distances(std::vector<float> & distance){
    for(std::list<WandererInfo>::iterator it_last = _last_infos_of_wanderers.begin(); it_last != _last_infos_of_wanderers.end(); it_last++){
        for(std::list<WandererInfo>::iterator it = _infos_of_wanderers.begin(); it != _infos_of_wanderers.end(); it++){
            if(it->index == it_last->index){
                distance.push_back(it->distance);
            }
        }
    }
}
*/
void Wanderers::getWandererData(std::vector<float> & data){
    data.clear();
    for(int i = 0; i < _SETTINGS->training.num_obs_humans; i++){
        
        data.push_back(_observed_wanderers[i].distance);		// distance to closest
        data.push_back(_observed_wanderers[i].angle);		        // angle to closest (relative from robot)
        data.push_back(_observed_wanderers[i].velocity_linear);       // linear relative velocity
        data.push_back(_observed_wanderers[i].velocity_angle);        // angular velocity
    }
    //cout<<_observed_wanderers[0].distance<<" ";
    
}
/*
bool Wanderers::checkHumanContact(b2Fixture* other_fixture){
    bool humanContact = false;
    for(int i = 0; i < _wanderers.size(); i++){
        if(_wanderers[i]->getType() == WANDERER_ID_HUMAN){
            if(_wanderers[i]->getBody()->GetFixtureList() == other_fixture){
                humanContact = true;
            }
        }
    }
    return humanContact;
}
*/
/*
void Wanderers::getClosestHuman(float & l2_h, float & angle_h){
     _infos_of_wanderers.sort();
     l2_h=_infos_of_wanderers.front()->distance;
     angle_h=_infos_of_wanderers.front()->angle;
}
*/

