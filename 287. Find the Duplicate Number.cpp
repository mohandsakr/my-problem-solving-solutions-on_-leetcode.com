/*
* Problem link: https://leetcode.com/problems/find-the-duplicate-number
* Problem name: 287. Find the Duplicate Number.
* Status: Accepted.
* Author: Mohand sakr.
** */


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> vect=nums;
        int result=0;
        int len=nums.size();
        sort(vect.begin(),vect.end());

        for(int i=1;i<len;i++){

            if(vect[i]==vect[i-1])
            { 
                result= vect[i];
            }

        }
return result;
    }
};
