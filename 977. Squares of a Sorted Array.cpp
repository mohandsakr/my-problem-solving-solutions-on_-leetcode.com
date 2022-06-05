/*
* problem link : https://leetcode.com/problems/squares-of-a-sorted-array/
* problem name:977. Squares of a Sorted Array
* Status: Accepted.
* Author : Mohand sakr.
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector <int> vect;
        
        int len=nums.size();
        
        for(int i=0;i<len;i++){
            vect.push_back((nums[i])*(nums[i]));
        }
        
    sort(vect.begin(),vect.end());
        
        return vect;
        
        
        
    }
};
