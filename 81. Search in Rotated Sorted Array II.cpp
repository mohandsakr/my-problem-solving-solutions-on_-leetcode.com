/*
problem link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
problem name: 81. Search in Rotated Sorted Array II
Status: Accepted.
Author: Mohand Sakr.
** */


class Solution {
public:
    bool search(vector<int>& nums, int target) {

        map<int,bool> ma;
        int len=nums.size();

        for(int i=0;i<len;i++){
            ma[nums[i]]=true;
        }
        return ma[target];
    }
};
