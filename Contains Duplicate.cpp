/*
problem link :https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/
problem name:Contains Duplicate
status: accepted
author : moahnd sakr
*/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        
        set<int> se;
        
        for(int i:nums){
            se.insert(i);
            
        }
        return se.size()!=nums.size();
    }
    
};
