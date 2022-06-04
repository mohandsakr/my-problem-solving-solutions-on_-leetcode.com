/*
* problem link :https://leetcode.com/problems/binary-search/
* problem name: 704. Binary Search 
* Status: Accepted.
* Author : Mohand sakr.
*/



class Solution {
public:
    int search(vector<int>& nums, int target) {
        
       int len=nums.size();
        int ans=find(nums.begin(),nums.end(),target)-nums.begin();
        if(ans<len){
            return ans;
        }
        else {
            return -1;
        }
         
    }
};
