/*
problem link : https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
problem name: 1464. Maximum Product of Two Elements in an Array
Status: Accepted.
Author : Mohand sakr.
** */

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int len=nums.size();
int maxi=0;
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                if(i!=j){
                int max2=(nums[i]-1)*(nums[j]-1);
                if(max2>maxi)
                maxi=max2;
            }
            }
        }
        return maxi;
        
    }
};
