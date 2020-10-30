#include "Arena.hpp"

const char * PYAGENT_FUNC_NAMES[PYAGENT_FUNC_NUM] = {
	"pre_step",
	"post_step",
	"get_stats",
	"stop"
};

PyObject* Arena::packPyObservation(int env_index)
{
	int num_samples;
	const float * laser_data = _envs[env_index].getScan(num_samples);

	std::vector<float> additional_data;
	// get additional data provided by level
	Level * level = _envs[env_index].getLevel();
	if(level != NULL){
		level->getAgentData(additional_data);
	}
	// get augmented data provided by robot
        float angle_closest_point = 0;
	float distance_closest_point = _SETTINGS->stage.level_size;
	Robot * robot =_envs[env_index].getRobot();
	if(robot != NULL){
		robot->getClosestPointDistance(angle_closest_point, distance_closest_point);
	}

	// creating new list that contains all the oservational data (distance and laser samples + additional data)
	PyObject * obs = PyList_New(num_samples+4+additional_data.size());

	// pack goal position
	float angle = 0;
	float distance = 0;
	_envs[env_index].getGoalDistance(distance, angle);
	PyList_SET_ITEM(obs, 0, PyFloat_FromDouble(distance));
	PyList_SET_ITEM(obs, 1, PyFloat_FromDouble(angle));
	// pack augmented data provided by robot        
	PyList_SET_ITEM(obs, 2, PyFloat_FromDouble(distance_closest_point));
	PyList_SET_ITEM(obs, 3, PyFloat_FromDouble(angle_closest_point));
	// pack laser samples
	for(int i = 0; i < num_samples; i++){
		PyList_SET_ITEM(obs, 4+i, PyFloat_FromDouble(laser_data[i]));
	}

	// pack additional data
	int num_additional=(int)additional_data.size();
	for(int i = 0; i < num_additional; i++){
		PyList_SET_ITEM(obs, num_samples+4+i, PyFloat_FromDouble(additional_data[i]));	
	}
        // pack relative angular velocity and relative linear velocity (human to robot) Todo
        

	return obs;
}

int Arena::getPyObservationSize(){
	std::vector<float> additional_data;
	Level * level = _envs[0].getLevel();
	if(level != NULL){
		level->getAgentData(additional_data);
	}
	int num_samples;
	_envs[0].getScan(num_samples);
	return num_samples+4+additional_data.size();
}

PyObject* Arena::packAllPyObservation()
{
	PyObject * obs;
	if(_numEnvs == 1)// only one observation from one environment
	{
		obs = packPyObservation(0);

	}else{// multiple observations from multiple environments
		obs = PyList_New(_numEnvs);
		for(int i = 0; i < _numEnvs; i++){
			PyList_SetItem(obs, i, packPyObservation(i));
		}
	}

	return obs;
}

PyObject* Arena::packAllPyRewards()
{
	PyObject * rewards;
	if(_numEnvs ==1)
	{
		rewards = PyFloat_FromDouble(_envs[0].getReward());
	}else{
		rewards = PyList_New(_numEnvs);
		for(int i = 0; i < _numEnvs; i++){
			PyList_SetItem(rewards, i, PyFloat_FromDouble(_envs[i].getReward()));
		}
	}
	return rewards;
}

PyObject* Arena::packAllPyDones()
{
	PyObject * dones;
	if(_numEnvs ==1)
	{
		dones = PyLong_FromLong(_dones[0]);
	}else{
		dones = PyList_New(_numEnvs);
		for(int i = 0; i < _numEnvs; i++){
			PyList_SetItem(dones, i, PyLong_FromLong(static_cast<long>(_dones[i])));
		}
	}
	return dones;
}
