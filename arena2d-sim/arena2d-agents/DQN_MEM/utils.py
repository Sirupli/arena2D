import numpy as np
DIST_LENGTH=120
num_observations=246+8+30
num_samples=360
class FeatureExtraction:
	def __init__(self, observation):
		self.observation=observation
	def distanceAngleExtract(self):
	    #filter the smallest dists
		observation_head=self.observation[:6]
		observation=self.observation[6:726]
		self.observation_tail=self.observation[726:]
		self.dist=np.array(observation[:num_samples])
		self.angle=np.array(observation[num_samples:])
		self.dist_index=np.argsort(self.dist)[:DIST_LENGTH]
		obs=np.concatenate((self.dist[self.dist_index], self.angle[self.dist_index]), axis=0).T
		return observation_head+obs.flatten().tolist()
	def largeRelativeDistExtract(self):
	    #filter the largest relative distances between i and i+1 samples
		relative_dist=[]
		l=len(self.dist)
		for i,d in enumerate(self.dist):
			relative_dist.append(np.abs(d-self.dist[(i+1)%l]))
		self.relative_dist=np.array(relative_dist)
		self.relDist_index=np.argsort(self.relative_dist)[-10:]
		obs_Rel_Dist=self.relative_dist[self.relDist_index]
		obs_Rel_Angle=(self.angle[self.relDist_index]+self.angle[(self.relDist_index+1)%l])/2
		obs_Rel_Center_Dist=(self.dist[self.relDist_index]+self.dist[(self.relDist_index+1)%l])/2
		obs_Rel=np.concatenate((obs_Rel_Dist, obs_Rel_Angle), axis=0)
		obs_Rel=np.concatenate((obs_Rel, obs_Rel_Center_Dist), axis=0).T.flatten().tolist()
		return obs_Rel
	def getObservation(self):
		obs=self.distanceAngleExtract()+self.largeRelativeDistExtract()+self.observation_tail
		return obs
    

