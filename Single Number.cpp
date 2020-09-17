/*

problem link : https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3283/ 
problem name:Single Number
status: accepted
author : moahnd sakr

*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        int len=nums.size();
        sort(nums.begin(),nums.end());
        
        
        if(len==1) return nums[0];
        
        for(int i=0;i<len;i++){
            
            if(!i) 
            {
               if(nums[i]!=nums[i+1])
                return nums[i];
            }
            
            else if(i==len-1){
               if(nums[i]!=nums[i-1]) 
                 return nums[i];
               
            }
            else {
                
                if(nums[i-1]!=nums[i]&&nums[i]!=nums[i+1])
                    return nums[i];
            }
            
 
            
            
        }
        
        return result;
        
    }
};
