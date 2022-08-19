/*
* problem link :https://leetcode.com/problems/richest-customer-wealth/
* problem name:1672. Richest Customer Wealth
* Status: Accepted.
* Author : Mohand sakr.
*/


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int len=accounts.size();
        int maxi=0;
        for(int i=0;i<len;i++){
            int len2=accounts[i].size();
            int sum=0;
            for(int j=0;j<len2;j++){
                
                sum+=accounts[i][j];
            }
             maxi=max(maxi,sum);
        }
        
        return maxi;
    }
    
   
};
