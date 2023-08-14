/*
problem link : https://leetcode.com/problems/kth-largest-element-in-an-array
problem name: 215. Kth Largest Element in an Array
Status: Accepted.
Author : Mohand sakr.
** */

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());

        return nums[(nums.size()-k)];

    }
};
