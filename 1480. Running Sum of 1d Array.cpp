/*
* Problem link :https://leetcode.com/problems/running-sum-of-1d-array/
* Problem name: 1480. Running Sum of 1d Array
* Status: accepted
* Author : Mohand sakr
** */


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int len=nums.size();
        vector<int> vect;
        vect.push_back(nums[0]);
        
        for(int i=1;i<len;i++){
            
            vect.push_back(nums[i]+vect[i-1]);
            
        }
        return vect;
        
    }
};
