/*
problem link :https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/546/
problem name: Two Sum 
status: accepted
author : moahnd sakr
** */



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
         vector<int> vect; 
                 vector<int> ::iterator it ; 

        int len=nums.size();
        
        for(int i=0;i<len;i++){
            
            int needed=target-nums[i];
            
            it=find(nums.begin(),nums.end(),needed);
            
            
            
            if(it!=nums.end()&&(it-nums.begin()!=i))
                
            {
                
                 vect.push_back(i);
                vect.push_back(it-nums.begin());
                break;
                
            }
            
            
        }
        
        return vect;
    }
};
