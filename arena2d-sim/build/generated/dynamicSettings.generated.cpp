//THIS FILE IS AUTO-GENERATED! DO NOT EDIT!

#include <engine/GlobalSettings.hpp>

void GlobalSettings::initSymbolTable()
{
	_hashTable = h_init(97, GlobalSettings::stringHash, NULL);
	sSettingsOption * option = NULL;

	//video.resolution_w
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.video.resolution_w);
	h_add(_hashTable, "video.resolution_w", 19, option, sizeof(sSettingsOption));

	//video.resolution_h
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.video.resolution_h);
	h_add(_hashTable, "video.resolution_h", 19, option, sizeof(sSettingsOption));

	//video.window_x
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.video.window_x);
	h_add(_hashTable, "video.window_x", 15, option, sizeof(sSettingsOption));

	//video.window_y
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.video.window_y);
	h_add(_hashTable, "video.window_y", 15, option, sizeof(sSettingsOption));

	//video.maximized
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.video.maximized);
	h_add(_hashTable, "video.maximized", 16, option, sizeof(sSettingsOption));

	//video.msaa
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.video.msaa);
	h_add(_hashTable, "video.msaa", 11, option, sizeof(sSettingsOption));

	//video.vsync
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.video.vsync);
	h_add(_hashTable, "video.vsync", 12, option, sizeof(sSettingsOption));

	//video.fps
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.video.fps);
	h_add(_hashTable, "video.fps", 10, option, sizeof(sSettingsOption));

	//video.fullscreen
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.video.fullscreen);
	h_add(_hashTable, "video.fullscreen", 17, option, sizeof(sSettingsOption));

	//video.enabled
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.video.enabled);
	h_add(_hashTable, "video.enabled", 14, option, sizeof(sSettingsOption));

	//gui.font_size
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.gui.font_size);
	h_add(_hashTable, "gui.font_size", 14, option, sizeof(sSettingsOption));

	//gui.show_robot
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.gui.show_robot);
	h_add(_hashTable, "gui.show_robot", 15, option, sizeof(sSettingsOption));

	//gui.show_stage
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.gui.show_stage);
	h_add(_hashTable, "gui.show_stage", 15, option, sizeof(sSettingsOption));

	//gui.show_laser
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.gui.show_laser);
	h_add(_hashTable, "gui.show_laser", 15, option, sizeof(sSettingsOption));

	//gui.show_stats
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.gui.show_stats);
	h_add(_hashTable, "gui.show_stats", 15, option, sizeof(sSettingsOption));

	//gui.show_goal
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.gui.show_goal);
	h_add(_hashTable, "gui.show_goal", 14, option, sizeof(sSettingsOption));

	//gui.show_goal_spawn
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.gui.show_goal_spawn);
	h_add(_hashTable, "gui.show_goal_spawn", 20, option, sizeof(sSettingsOption));

	//gui.show_trail
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.gui.show_trail);
	h_add(_hashTable, "gui.show_trail", 15, option, sizeof(sSettingsOption));

	//gui.camera_follow
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.gui.camera_follow);
	h_add(_hashTable, "gui.camera_follow", 18, option, sizeof(sSettingsOption));

	//gui.camera_x
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.gui.camera_x);
	h_add(_hashTable, "gui.camera_x", 13, option, sizeof(sSettingsOption));

	//gui.camera_y
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.gui.camera_y);
	h_add(_hashTable, "gui.camera_y", 13, option, sizeof(sSettingsOption));

	//gui.camera_zoom
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.gui.camera_zoom);
	h_add(_hashTable, "gui.camera_zoom", 16, option, sizeof(sSettingsOption));

	//gui.camera_rotation
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.gui.camera_rotation);
	h_add(_hashTable, "gui.camera_rotation", 20, option, sizeof(sSettingsOption));

	//gui.camera_zoom_factor
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.gui.camera_zoom_factor);
	h_add(_hashTable, "gui.camera_zoom_factor", 23, option, sizeof(sSettingsOption));

	//keys.up
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_KEY;
	option->data = &(_settings.keys.up);
	h_add(_hashTable, "keys.up", 8, option, sizeof(sSettingsOption));

	//keys.left
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_KEY;
	option->data = &(_settings.keys.left);
	h_add(_hashTable, "keys.left", 10, option, sizeof(sSettingsOption));

	//keys.down
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_KEY;
	option->data = &(_settings.keys.down);
	h_add(_hashTable, "keys.down", 10, option, sizeof(sSettingsOption));

	//keys.right
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_KEY;
	option->data = &(_settings.keys.right);
	h_add(_hashTable, "keys.right", 11, option, sizeof(sSettingsOption));

	//keys.reset
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_KEY;
	option->data = &(_settings.keys.reset);
	h_add(_hashTable, "keys.reset", 11, option, sizeof(sSettingsOption));

	//keys.play_pause_simulation
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_KEY;
	option->data = &(_settings.keys.play_pause_simulation);
	h_add(_hashTable, "keys.play_pause_simulation", 27, option, sizeof(sSettingsOption));

	//physics.time_step
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.physics.time_step);
	h_add(_hashTable, "physics.time_step", 18, option, sizeof(sSettingsOption));

	//physics.step_iterations
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.physics.step_iterations);
	h_add(_hashTable, "physics.step_iterations", 24, option, sizeof(sSettingsOption));

	//physics.fps
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.physics.fps);
	h_add(_hashTable, "physics.fps", 12, option, sizeof(sSettingsOption));

	//physics.position_iterations
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.physics.position_iterations);
	h_add(_hashTable, "physics.position_iterations", 28, option, sizeof(sSettingsOption));

	//physics.velocity_iterations
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.physics.velocity_iterations);
	h_add(_hashTable, "physics.velocity_iterations", 28, option, sizeof(sSettingsOption));

	//training.max_time
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.training.max_time);
	h_add(_hashTable, "training.max_time", 18, option, sizeof(sSettingsOption));

	//training.episode_over_on_hit
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.training.episode_over_on_hit);
	h_add(_hashTable, "training.episode_over_on_hit", 29, option, sizeof(sSettingsOption));

	//training.episode_over_on_human
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.training.episode_over_on_human);
	h_add(_hashTable, "training.episode_over_on_human", 31, option, sizeof(sSettingsOption));

	//training.reward_goal
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.training.reward_goal);
	h_add(_hashTable, "training.reward_goal", 21, option, sizeof(sSettingsOption));

	//training.reward_towards_goal
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.training.reward_towards_goal);
	h_add(_hashTable, "training.reward_towards_goal", 29, option, sizeof(sSettingsOption));

	//training.reward_away_from_goal
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.training.reward_away_from_goal);
	h_add(_hashTable, "training.reward_away_from_goal", 31, option, sizeof(sSettingsOption));

	//training.reward_hit
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.training.reward_hit);
	h_add(_hashTable, "training.reward_hit", 20, option, sizeof(sSettingsOption));

	//training.safety_distance_human
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.training.safety_distance_human);
	h_add(_hashTable, "training.safety_distance_human", 31, option, sizeof(sSettingsOption));

	//training.reward_exceed_safety_distance
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.training.reward_exceed_safety_distance);
	h_add(_hashTable, "training.reward_exceed_safety_distance", 39, option, sizeof(sSettingsOption));

	//training.num_obs_humans
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.training.num_obs_humans);
	h_add(_hashTable, "training.num_obs_humans", 24, option, sizeof(sSettingsOption));

	//training.reward_time_out
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.training.reward_time_out);
	h_add(_hashTable, "training.reward_time_out", 25, option, sizeof(sSettingsOption));

	//training.num_envs
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.training.num_envs);
	h_add(_hashTable, "training.num_envs", 18, option, sizeof(sSettingsOption));

	//training.num_threads
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.training.num_threads);
	h_add(_hashTable, "training.num_threads", 21, option, sizeof(sSettingsOption));

	//training.agent_class
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_STRING;
	option->data = &(_settings.training.agent_class);
	h_add(_hashTable, "training.agent_class", 21, option, sizeof(sSettingsOption));

	//robot.laser_noise
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.laser_noise);
	h_add(_hashTable, "robot.laser_noise", 18, option, sizeof(sSettingsOption));

	//robot.laser_max_distance
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.laser_max_distance);
	h_add(_hashTable, "robot.laser_max_distance", 25, option, sizeof(sSettingsOption));

	//robot.laser_start_angle
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.laser_start_angle);
	h_add(_hashTable, "robot.laser_start_angle", 24, option, sizeof(sSettingsOption));

	//robot.laser_end_angle
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.laser_end_angle);
	h_add(_hashTable, "robot.laser_end_angle", 22, option, sizeof(sSettingsOption));

	//robot.laser_num_samples
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.robot.laser_num_samples);
	h_add(_hashTable, "robot.laser_num_samples", 24, option, sizeof(sSettingsOption));

	//robot.laser_offset.x
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.laser_offset.x);
	h_add(_hashTable, "robot.laser_offset.x", 21, option, sizeof(sSettingsOption));

	//robot.laser_offset.y
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.laser_offset.y);
	h_add(_hashTable, "robot.laser_offset.y", 21, option, sizeof(sSettingsOption));

	//robot.base_size.x
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.base_size.x);
	h_add(_hashTable, "robot.base_size.x", 18, option, sizeof(sSettingsOption));

	//robot.base_size.y
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.base_size.y);
	h_add(_hashTable, "robot.base_size.y", 18, option, sizeof(sSettingsOption));

	//robot.wheel_size.x
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.wheel_size.x);
	h_add(_hashTable, "robot.wheel_size.x", 19, option, sizeof(sSettingsOption));

	//robot.wheel_size.y
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.wheel_size.y);
	h_add(_hashTable, "robot.wheel_size.y", 19, option, sizeof(sSettingsOption));

	//robot.wheel_offset.x
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.wheel_offset.x);
	h_add(_hashTable, "robot.wheel_offset.x", 21, option, sizeof(sSettingsOption));

	//robot.wheel_offset.y
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.wheel_offset.y);
	h_add(_hashTable, "robot.wheel_offset.y", 21, option, sizeof(sSettingsOption));

	//robot.bevel_size.x
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.bevel_size.x);
	h_add(_hashTable, "robot.bevel_size.x", 19, option, sizeof(sSettingsOption));

	//robot.bevel_size.y
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.bevel_size.y);
	h_add(_hashTable, "robot.bevel_size.y", 19, option, sizeof(sSettingsOption));

	//robot.forward_speed.linear
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.forward_speed.linear);
	h_add(_hashTable, "robot.forward_speed.linear", 27, option, sizeof(sSettingsOption));

	//robot.forward_speed.angular
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.forward_speed.angular);
	h_add(_hashTable, "robot.forward_speed.angular", 28, option, sizeof(sSettingsOption));

	//robot.left_speed.linear
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.left_speed.linear);
	h_add(_hashTable, "robot.left_speed.linear", 24, option, sizeof(sSettingsOption));

	//robot.left_speed.angular
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.left_speed.angular);
	h_add(_hashTable, "robot.left_speed.angular", 25, option, sizeof(sSettingsOption));

	//robot.right_speed.linear
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.right_speed.linear);
	h_add(_hashTable, "robot.right_speed.linear", 25, option, sizeof(sSettingsOption));

	//robot.right_speed.angular
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.right_speed.angular);
	h_add(_hashTable, "robot.right_speed.angular", 26, option, sizeof(sSettingsOption));

	//robot.strong_left_speed.linear
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.strong_left_speed.linear);
	h_add(_hashTable, "robot.strong_left_speed.linear", 31, option, sizeof(sSettingsOption));

	//robot.strong_left_speed.angular
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.strong_left_speed.angular);
	h_add(_hashTable, "robot.strong_left_speed.angular", 32, option, sizeof(sSettingsOption));

	//robot.strong_right_speed.linear
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.strong_right_speed.linear);
	h_add(_hashTable, "robot.strong_right_speed.linear", 32, option, sizeof(sSettingsOption));

	//robot.strong_right_speed.angular
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.strong_right_speed.angular);
	h_add(_hashTable, "robot.strong_right_speed.angular", 33, option, sizeof(sSettingsOption));

	//robot.backward_speed.linear
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.backward_speed.linear);
	h_add(_hashTable, "robot.backward_speed.linear", 28, option, sizeof(sSettingsOption));

	//robot.backward_speed.angular
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.robot.backward_speed.angular);
	h_add(_hashTable, "robot.backward_speed.angular", 29, option, sizeof(sSettingsOption));

	//stage.random_seed
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.stage.random_seed);
	h_add(_hashTable, "stage.random_seed", 18, option, sizeof(sSettingsOption));

	//stage.initial_level
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_STRING;
	option->data = &(_settings.stage.initial_level);
	h_add(_hashTable, "stage.initial_level", 20, option, sizeof(sSettingsOption));

	//stage.level_size
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.stage.level_size);
	h_add(_hashTable, "stage.level_size", 17, option, sizeof(sSettingsOption));

	//stage.max_obstacle_size
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.stage.max_obstacle_size);
	h_add(_hashTable, "stage.max_obstacle_size", 24, option, sizeof(sSettingsOption));

	//stage.min_obstacle_size
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.stage.min_obstacle_size);
	h_add(_hashTable, "stage.min_obstacle_size", 24, option, sizeof(sSettingsOption));

	//stage.num_obstacles
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.stage.num_obstacles);
	h_add(_hashTable, "stage.num_obstacles", 20, option, sizeof(sSettingsOption));

	//stage.dynamic_obstacle_size
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.stage.dynamic_obstacle_size);
	h_add(_hashTable, "stage.dynamic_obstacle_size", 28, option, sizeof(sSettingsOption));

	//stage.num_dynamic_obstacles
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_INT;
	option->data = &(_settings.stage.num_dynamic_obstacles);
	h_add(_hashTable, "stage.num_dynamic_obstacles", 28, option, sizeof(sSettingsOption));

	//stage.max_time_chatting
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.stage.max_time_chatting);
	h_add(_hashTable, "stage.max_time_chatting", 24, option, sizeof(sSettingsOption));

	//stage.obstacle_speed
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.stage.obstacle_speed);
	h_add(_hashTable, "stage.obstacle_speed", 21, option, sizeof(sSettingsOption));

	//stage.goal_size
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_FLOAT;
	option->data = &(_settings.stage.goal_size);
	h_add(_hashTable, "stage.goal_size", 16, option, sizeof(sSettingsOption));

	//stage.svg_path
	option = (sSettingsOption*)malloc(sizeof(sSettingsOption));
	option->type = SETTINGS_TYPE_STRING;
	option->data = &(_settings.stage.svg_path);
	h_add(_hashTable, "stage.svg_path", 15, option, sizeof(sSettingsOption));

}

void GlobalSettings::writeToFile(FILE * f)
{
	char float_buffer[64];

	fprintf(f, "video{\n");
	fprintf(f, "\tresolution_w = %d   # window width\n", _settings.video.resolution_w);
	fprintf(f, "\tresolution_h = %d   # window height\n", _settings.video.resolution_h);
	fprintf(f, "\twindow_x = %d   # window x position on startup -1 for centered\n", _settings.video.window_x);
	fprintf(f, "\twindow_y = %d   # window y position on startup -1 for centered\n", _settings.video.window_y);
	fprintf(f, "\tmaximized = %d   # start window maximized 1/0\n", _settings.video.maximized);
	fprintf(f, "\tmsaa = %d   # multisampling anti-aliasing 2,4,8,16\n", _settings.video.msaa);
	fprintf(f, "\tvsync = %d   # vertical synchronization 1/0\n", _settings.video.vsync);
	fprintf(f, "\tfps = %d   # video frames per second\n", _settings.video.fps);
	fprintf(f, "\tfullscreen = %d   # fullscreen enabled 1/0\n", _settings.video.fullscreen);
	fprintf(f, "\tenabled = %d   # video mode enabled 1/0; if set to 0\n", _settings.video.enabled);
	fprintf(f, "}\n\n");
	fprintf(f, "gui{\n");
	fprintf(f, "\tfont_size = %d   # gui font size\n", _settings.gui.font_size);
	fprintf(f, "\tshow_robot = %d   # show/hide the robot\n", _settings.gui.show_robot);
	fprintf(f, "\tshow_stage = %d   # show/hide the stage\n", _settings.gui.show_stage);
	fprintf(f, "\tshow_laser = %d   # show/hide the laser\n", _settings.gui.show_laser);
	fprintf(f, "\tshow_stats = %d   # show/hide the statistics (e.g. #episodes)\n", _settings.gui.show_stats);
	fprintf(f, "\tshow_goal = %d   # show/hide goal\n", _settings.gui.show_goal);
	fprintf(f, "\tshow_goal_spawn = %d   # show/hide the spawn area for the goal\n", _settings.gui.show_goal_spawn);
	fprintf(f, "\tshow_trail = %d   # show/hide robot trail\n", _settings.gui.show_trail);
	fprintf(f, "\tcamera_follow = %d   # if == 1 camera follows robot, (if == 2, rotation is also taken into acount)\n", _settings.gui.camera_follow);
	zStringTools::fromFloat(_settings.gui.camera_x, float_buffer);
	fprintf(f, "\tcamera_x = %s   # initial position of camera\n", float_buffer);
	zStringTools::fromFloat(_settings.gui.camera_y, float_buffer);
	fprintf(f, "\tcamera_y = %s   # initial position of camera\n", float_buffer);
	zStringTools::fromFloat(_settings.gui.camera_zoom, float_buffer);
	fprintf(f, "\tcamera_zoom = %s   # initial zoom of camera (zoom actually means scaling of the view -> camera_zoom < 1 means zooming out)\n", float_buffer);
	zStringTools::fromFloat(_settings.gui.camera_rotation, float_buffer);
	fprintf(f, "\tcamera_rotation = %s   # view rotation in degree\n", float_buffer);
	zStringTools::fromFloat(_settings.gui.camera_zoom_factor, float_buffer);
	fprintf(f, "\tcamera_zoom_factor = %s   # how does scaling increase/decrease with each zoom step\n", float_buffer);
	fprintf(f, "}\n\n");
	fprintf(f, "keys{\n");
	fprintf(f, "\tup = %s   # key for moving forward\n", getSettingsKeyName(_settings.keys.up));
	fprintf(f, "\tleft = %s   # key for moving left\n", getSettingsKeyName(_settings.keys.left));
	fprintf(f, "\tdown = %s   # key for moving backward\n", getSettingsKeyName(_settings.keys.down));
	fprintf(f, "\tright = %s   # key for moving right\n", getSettingsKeyName(_settings.keys.right));
	fprintf(f, "\treset = %s   # key for resetting robot\n", getSettingsKeyName(_settings.keys.reset));
	fprintf(f, "\tplay_pause_simulation = %s   # key for playing/pausing simulation\n", getSettingsKeyName(_settings.keys.play_pause_simulation));
	fprintf(f, "}\n\n");
	fprintf(f, "physics{\n");
	zStringTools::fromFloat(_settings.physics.time_step, float_buffer);
	fprintf(f, "\ttime_step = %s   # physics time step\n", float_buffer);
	fprintf(f, "\tstep_iterations = %d   # how often to perform a physics update per step\n", _settings.physics.step_iterations);
	fprintf(f, "\tfps = %d   # how many times per second a simulation step is performed with step_iterations sub steps\n", _settings.physics.fps);
	fprintf(f, "\tposition_iterations = %d   # position iterations for each time step (higher value increases simulation accuracy)\n", _settings.physics.position_iterations);
	fprintf(f, "\tvelocity_iterations = %d   # velocity iterations for each time step (higher value increases simulation accuracy)\n", _settings.physics.velocity_iterations);
	fprintf(f, "}\n\n");
	fprintf(f, "training{\n");
	zStringTools::fromFloat(_settings.training.max_time, float_buffer);
	fprintf(f, "\tmax_time = %s   # maximum time per episode (actual time, so physics.time_step influences maximum number of steps per episode)\n", float_buffer);
	fprintf(f, "\tepisode_over_on_hit = %d   # if set to 1 episode ends if an obstacle is hit\n", _settings.training.episode_over_on_hit);
	fprintf(f, "\tepisode_over_on_human = %d   # if set to 1 episode ends if a human is too close\n", _settings.training.episode_over_on_human);
	zStringTools::fromFloat(_settings.training.reward_goal, float_buffer);
	fprintf(f, "\treward_goal = %s   # reward for reaching goal\n", float_buffer);
	zStringTools::fromFloat(_settings.training.reward_towards_goal, float_buffer);
	fprintf(f, "\treward_towards_goal = %s   # reward when distance to goal decreases\n", float_buffer);
	zStringTools::fromFloat(_settings.training.reward_away_from_goal, float_buffer);
	fprintf(f, "\treward_away_from_goal = %s   # reward when distance to goal increases\n", float_buffer);
	zStringTools::fromFloat(_settings.training.reward_hit, float_buffer);
	fprintf(f, "\treward_hit = %s   # reward for hitting obstacle\n", float_buffer);
	zStringTools::fromFloat(_settings.training.safety_distance_human, float_buffer);
	fprintf(f, "\tsafety_distance_human = %s   # safty distance to human, which should be always fullfilled\n", float_buffer);
	zStringTools::fromFloat(_settings.training.reward_exceed_safety_distance, float_buffer);
	fprintf(f, "\treward_exceed_safety_distance = %s   #float reward_distance_to_human_increased;  // reward when distance to human increases\n", float_buffer);
	zStringTools::fromFloat(_settings.training.num_obs_humans, float_buffer);
	fprintf(f, "\tnum_obs_humans = %s   # maximum number of humans the agent can observe inside the camera view\n", float_buffer);
	zStringTools::fromFloat(_settings.training.reward_time_out, float_buffer);
	fprintf(f, "\treward_time_out = %s   # reward when episode timed out (after max_time seconds)\n", float_buffer);
	fprintf(f, "\tnum_envs = %d   # number of parallel environments\n", _settings.training.num_envs);
	fprintf(f, "\tnum_threads = %d   # number of threads to run in parallel, if set to -1 number of cpu cores will be detected automatically\n", _settings.training.num_threads);
	fprintf(f, "\tagent_class = \"%s\"   # name of class in agent python script\n", _settings.training.agent_class.c_str());
	fprintf(f, "}\n\n");
	fprintf(f, "robot{\n");
	zStringTools::fromFloat(_settings.robot.laser_noise, float_buffer);
	fprintf(f, "\tlaser_noise = %s   # random, uniformly distributed offset with a maximum of +/- laser_noise*distance_measured (a value of 0 means perfect laser data -> no noise)\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.laser_max_distance, float_buffer);
	fprintf(f, "\tlaser_max_distance = %s   # maximum distance the laser can recognize\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.laser_start_angle, float_buffer);
	fprintf(f, "\tlaser_start_angle = %s   # angle in degree of first sample\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.laser_end_angle, float_buffer);
	fprintf(f, "\tlaser_end_angle = %s   # angle in degree of last sample\n", float_buffer);
	fprintf(f, "\tlaser_num_samples = %d   # number of laser samples\n", _settings.robot.laser_num_samples);
	fprintf(f, "\tlaser_offset{   # offset of laser from base center\n");
	zStringTools::fromFloat(_settings.robot.laser_offset.x, float_buffer);
	fprintf(f, "\t\tx = %s\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.laser_offset.y, float_buffer);
	fprintf(f, "\t\ty = %s\n", float_buffer);
	fprintf(f, "\t}\n");
	fprintf(f, "\tbase_size{   # width(x) and height(y) of robot base\n");
	zStringTools::fromFloat(_settings.robot.base_size.x, float_buffer);
	fprintf(f, "\t\tx = %s\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.base_size.y, float_buffer);
	fprintf(f, "\t\ty = %s\n", float_buffer);
	fprintf(f, "\t}\n");
	fprintf(f, "\twheel_size{   # width(x) and height(y) of robot wheels\n");
	zStringTools::fromFloat(_settings.robot.wheel_size.x, float_buffer);
	fprintf(f, "\t\tx = %s\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.wheel_size.y, float_buffer);
	fprintf(f, "\t\ty = %s\n", float_buffer);
	fprintf(f, "\t}\n");
	fprintf(f, "\twheel_offset{   # offset of wheels from edge of base\n");
	zStringTools::fromFloat(_settings.robot.wheel_offset.x, float_buffer);
	fprintf(f, "\t\tx = %s\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.wheel_offset.y, float_buffer);
	fprintf(f, "\t\ty = %s\n", float_buffer);
	fprintf(f, "\t}\n");
	fprintf(f, "\tbevel_size{   # size of bevel along x/y axis at the base corners\n");
	zStringTools::fromFloat(_settings.robot.bevel_size.x, float_buffer);
	fprintf(f, "\t\tx = %s\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.bevel_size.y, float_buffer);
	fprintf(f, "\t\ty = %s\n", float_buffer);
	fprintf(f, "\t}\n");
	fprintf(f, "\tforward_speed{   # velocity for forward action\n");
	zStringTools::fromFloat(_settings.robot.forward_speed.linear, float_buffer);
	fprintf(f, "\t\tlinear = %s\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.forward_speed.angular, float_buffer);
	fprintf(f, "\t\tangular = %s\n", float_buffer);
	fprintf(f, "\t}\n");
	fprintf(f, "\tleft_speed{   # velocity for left action\n");
	zStringTools::fromFloat(_settings.robot.left_speed.linear, float_buffer);
	fprintf(f, "\t\tlinear = %s\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.left_speed.angular, float_buffer);
	fprintf(f, "\t\tangular = %s\n", float_buffer);
	fprintf(f, "\t}\n");
	fprintf(f, "\tright_speed{   # velocity for right action\n");
	zStringTools::fromFloat(_settings.robot.right_speed.linear, float_buffer);
	fprintf(f, "\t\tlinear = %s\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.right_speed.angular, float_buffer);
	fprintf(f, "\t\tangular = %s\n", float_buffer);
	fprintf(f, "\t}\n");
	fprintf(f, "\tstrong_left_speed{   # velocity for strong left action\n");
	zStringTools::fromFloat(_settings.robot.strong_left_speed.linear, float_buffer);
	fprintf(f, "\t\tlinear = %s\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.strong_left_speed.angular, float_buffer);
	fprintf(f, "\t\tangular = %s\n", float_buffer);
	fprintf(f, "\t}\n");
	fprintf(f, "\tstrong_right_speed{   # velocity for strong right action\n");
	zStringTools::fromFloat(_settings.robot.strong_right_speed.linear, float_buffer);
	fprintf(f, "\t\tlinear = %s\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.strong_right_speed.angular, float_buffer);
	fprintf(f, "\t\tangular = %s\n", float_buffer);
	fprintf(f, "\t}\n");
	fprintf(f, "\tbackward_speed{   # velocity for backward action\n");
	zStringTools::fromFloat(_settings.robot.backward_speed.linear, float_buffer);
	fprintf(f, "\t\tlinear = %s\n", float_buffer);
	zStringTools::fromFloat(_settings.robot.backward_speed.angular, float_buffer);
	fprintf(f, "\t\tangular = %s\n", float_buffer);
	fprintf(f, "\t}\n");
	fprintf(f, "}\n\n");
	fprintf(f, "stage{\n");
	fprintf(f, "\trandom_seed = %d   # seed for pseudo random generator\n", _settings.stage.random_seed);
	fprintf(f, "\tinitial_level = \"%s\"   # level loaded on startup (-1 for none)\n", _settings.stage.initial_level.c_str());
	zStringTools::fromFloat(_settings.stage.level_size, float_buffer);
	fprintf(f, "\tlevel_size = %s   # width and height of default levels\n", float_buffer);
	zStringTools::fromFloat(_settings.stage.max_obstacle_size, float_buffer);
	fprintf(f, "\tmax_obstacle_size = %s   # maximum diameter of static obstacles\n", float_buffer);
	zStringTools::fromFloat(_settings.stage.min_obstacle_size, float_buffer);
	fprintf(f, "\tmin_obstacle_size = %s   # minimum diameter of static obstacles\n", float_buffer);
	fprintf(f, "\tnum_obstacles = %d   # number of static obstacles\n", _settings.stage.num_obstacles);
	zStringTools::fromFloat(_settings.stage.dynamic_obstacle_size, float_buffer);
	fprintf(f, "\tdynamic_obstacle_size = %s   # size of dynamic obstacle\n", float_buffer);
	fprintf(f, "\tnum_dynamic_obstacles = %d   # number of dynamic obstacles in static_dynamic level\n", _settings.stage.num_dynamic_obstacles);
	zStringTools::fromFloat(_settings.stage.max_time_chatting, float_buffer);
	fprintf(f, "\tmax_time_chatting = %s   # maximum time for chatting between two wanderers\n", float_buffer);
	zStringTools::fromFloat(_settings.stage.obstacle_speed, float_buffer);
	fprintf(f, "\tobstacle_speed = %s   # in m/s for dynamic obstacles\n", float_buffer);
	zStringTools::fromFloat(_settings.stage.goal_size, float_buffer);
	fprintf(f, "\tgoal_size = %s   # diameter of circular goal to reach\n", float_buffer);
	fprintf(f, "\tsvg_path = \"%s\"   # path to folder where svg files are stored\n", _settings.stage.svg_path.c_str());
	fprintf(f, "}\n\n");
}
