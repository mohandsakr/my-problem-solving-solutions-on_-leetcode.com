/*
Problem Link: https://leetcode.com/problems/first-missing-positive
Problem Name: 41. First Missing Positive
Status: Accepted.
Author: Mohand sakr.
** */
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result=0;
        map<int,int> ma;
        int len=nums.size();
        
        for(int i=0;i<len;i++){
            ++ma[nums[i]];
        }
 
        for(long i=1;i<nums[len-1];i++){
            if(!ma[i]){
                result =i;
                break;
            }

        }
        
        if(result ==0){
            if(nums[len-1]>0){
            result =nums[len-1]+1;}
            else{
                result =1;
            }
        }
    return result;

    }
};
