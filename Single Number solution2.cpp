/*
problem link :https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/549/
problem name: Single Number
status: accepted
author : moahnd sakr
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        
        int len=nums.size();
        int result=0;
        if(len>1){
        if(nums[0]!=nums[1]) result=nums[0];
        if(nums[len-2]!=nums[len-1]) result=nums[len-1];
        else {
        for(int i=1;i<len-2;i++){
            int val=0;
            if(nums[i-1]==nums[i]){
                ++val;
            }
            if(nums[i]==nums[i+1]){
                ++val;
            }
            
            if(!val){
            result=nums[i];
            }
            
         }
        }
            
        }
        
            else {
                return nums[0];
            }
        
        return result;
    }
};
