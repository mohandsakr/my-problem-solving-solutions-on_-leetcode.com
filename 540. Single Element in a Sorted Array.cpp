

/*
problem link : https://leetcode.com/problems/single-element-in-a-sorted-array/
problem name: 540. Single Element in a Sorted Array
Status: Accepted.
Author : Mohand sakr.
** */



class Solution {
public:
    int arr[100005]={};
    int singleNonDuplicate(vector<int>& nums) {
        int len=nums.size();
        int result=0;
        
        for(int i=0;i<len;i++)
        {
            ++arr[nums[i]];
        }
        
        for(int i=0;i<100001;i++){
            if(arr[i]==1){
                result=i;
            }
        }
        
        return result;
        
    }
};
