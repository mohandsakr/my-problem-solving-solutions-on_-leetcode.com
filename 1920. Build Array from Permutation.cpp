/*
* problem link : https://leetcode.com/problems/build-array-from-permutation/
* problem name: 700. Search in a Binary Search Tree1920. Build Array from Permutation
* Status: Accepted.
* Author : Mohand sakr.
*/



class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        vector<int> vect;
        
        int len=nums.size();
        
        for(int i=0;i<len;i++){
            
            vect.push_back(nums[nums[i]]);
        }
        
        return vect;
        
    }
};

