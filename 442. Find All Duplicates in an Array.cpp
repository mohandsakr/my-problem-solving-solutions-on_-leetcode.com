/*
problem link : https://leetcode.com/problems/find-all-duplicates-in-an-array
problem name: 442. Find All Duplicates in an Array
Status: Accepted.
Author : Mohand sakr.
** */


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>vect;
        int arr[100002]={};

        int len=nums.size();

        for(int i=0;i<len;i++){
            ++arr[nums[i]];
        }
        for(int i=1;i<100001;i++){
            if(arr[i]==2){
                vect.push_back(i);
            }
        }
        return vect;

    }
};
