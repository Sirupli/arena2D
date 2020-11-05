from dqn_models import fc 
import utils
import torch
import pathlib

NUM_ACTIONS = 5

MODEL_N ="/home/junhui/study/Masterarbeit/arena_work_oberservation_augmentation/arena2D/arena2d-sim/arena2d-agents/DQN_MEM/"

class Agent:
	def __init__(self, device, model_name, num_observations, num_envs, num_threads, training_data_path):
		assert(num_envs == 1)
		self.model_name=MODEL_N+"dqn_agent_best_fc.dat"
		self.device = torch.device(device)
		self.num_observations = utils.num_observations_dist
		self.net = fc.FC_DQN(self.num_observations, NUM_ACTIONS)
		self.net.train(False)# set training mode to false to deactivate dropout layer
		self.net.load_state_dict(torch.load(self.model_name, map_location=self.device))
		self.net.to(self.device)

	def pre_step(self, observation):
		# passing observation through net		
		feature=utils.FeatureExtraction(observation)
		self.last_observation=feature.getDistanceOnlyObservation()
		state_v = torch.FloatTensor([self.last_observation]).to(self.device)
		q_vals_v = self.net(state_v)
		# select action with max q value
		_, act_v = torch.max(q_vals_v, dim=1)
		action = int(act_v.item())
		return action

	def post_step(new_observation, action, reward, mean_reward, is_done, mean_success,mean_collision):
		return 0 # keep on playing

	def stop(self):
		pass
