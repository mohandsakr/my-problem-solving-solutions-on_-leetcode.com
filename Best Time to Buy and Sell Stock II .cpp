
/*
problem link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/564/
problem name: Best Time to Buy and Sell Stock II

status: accepted
author : moahnd sakr
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    int len=prices.size();
        int cur=prices[0];
        int profit=0;
        
        for(int i=1;i<len;i++){
            
            
            if(cur<prices[i]){
                
                profit+=prices[i]-cur;
                cur=prices[i];
                
            }
            
            else {
                
               cur=prices[i]; 
                
            }
            
            
        }
        
 return profit;
        
        
    }
};
