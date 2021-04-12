/*
problem link :https://leetcode.com/problems/product-of-array-except-self/
problem name: 238. Product of Array Except Self
status: accepted
author : Mohand sakr
** */


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int len=nums.size();
        int havezero=0;
        long product=1;
        for(int i=0;i<len;i++){
            
            if(nums[i]){
                product*=nums[i];
            }
            else {
                ++havezero;
            }

        }
        
        for(int i=0;i<len;i++)
        {
            if(havezero>1){
           nums[i]=0;
                
            }
            else if(havezero==1){
                if(!nums[i]){
                    nums[i]=product;
                }
                else {
                    nums[i]=0;
                }
            }
            else {
                nums[i]=product/nums[i];
            
            }
            
            
        }
        
     
            return nums;
    }
};
