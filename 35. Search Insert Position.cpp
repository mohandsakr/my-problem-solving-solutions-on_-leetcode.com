/*
problem link : https://leetcode.com/problems/search-insert-position/
problem name: 35. Search Insert Position
Status: Accepted.
Author : Mohand sakr.
** */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
int result=0;
        int len=nums.size();

        for(int i=0;i<len;i++){

            if(nums[i]==target)
            {
                result= i;
                break;
            }
            else if(nums[i]>target){
                result= i;
                break;
            }
            else {
                result=len;
            }

        }

       return result;
        
    }
};
