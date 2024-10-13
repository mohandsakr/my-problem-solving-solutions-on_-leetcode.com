/*
problem link : https://leetcode.com/problems/majority-element/description/
problem name: 169. Majority Element
Status: Accepted.
Author : Mohand sakr.
** */
/**

class Solution {
public:

int majorityElement(vector<int>& nums) {

map<int,int> numfrq;

int len=nums.size();

int result=0;
for(int i=0;i<len;i++){

++numfrq[nums[i]];

}

for(int i=0;i<len;i++)
{
    if(numfrq[nums[i]]>(len/2)){
        result= nums[i];
        break;

    }
}

return result;

    }
};
