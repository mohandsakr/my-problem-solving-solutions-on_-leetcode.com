/*
problem link: https://leetcode.com/problems/buy-two-chocolates/
problem name: 2706. Buy Two Chocolates
Status: Accepted.
Author: Mohand sakr.
*/


class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
sort (prices.begin(),prices.end());

        int rest= money-(prices[1]+prices[0]);

        if(rest<0){
            return money;
        }


        return rest;
        
    }
};
