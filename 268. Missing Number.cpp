/*
problem link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
problem name: 104. Maximum Depth of Binary Tree
Status: Accepted.
Author: Mohand sakr.
** */



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len=nums.size();

int result=-5;
        sort(nums.begin(),nums.end());

        for(int i=0;i<len;i++){

if(nums[i]!=i){

result=i;
break;
}

        }

        if(result<0){
            result=len;
        }
       return result; 
    }
    
};
