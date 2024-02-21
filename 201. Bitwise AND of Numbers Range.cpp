/*
problem link: https://leetcode.com/problems/search-insert-position/
problem name: 201. Bitwise AND of Numbers Range
Status: Accepted.
Author: Mohand sakr.
** */

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count = 0;
//Get the number of shifts till get the common bits of the two numbers. 
        while(left!=right){
            left>>=1;
            right>>=1;
            ++count;
        }
//multiply the number by 2 because the  bitwise anding between two numbers inclusive is 2* number of shifts till get the number of shifts till get the common bits of the two numbers.

        return left<<count;
    }
};
