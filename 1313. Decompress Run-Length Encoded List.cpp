/**
problem link : https://leetcode.com/problems/decompress-run-length-encoded-list/ 
problem name: 1313. Decompress Run-Length Encoded List 
status: Accepted
author : Moahnd sakr

**/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> vect;
        int len=nums.size();
        for(int i=0;i<len;i+=2){
            int val=nums[i+1];
            for(int j=0;j<nums[i];j++){
                vect.push_back(val);
            }
            
        }
        
        return vect;
    }
};
