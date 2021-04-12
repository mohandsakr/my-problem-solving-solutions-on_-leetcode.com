/*
problem link :https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
problem name: 121. Best Time to Buy and Sell Stock
status: Accepted
author : Moahnd sakr
** */


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int len=prices.size();
        
        int buy=prices[0];
        int profit=0;
        
        
        
        for(int i=1;i<len;i++){
            
            if(prices[i]>buy){
                int temp=prices[i]-buy;
                if(temp>profit)
                {
               profit=temp;
                }
            }
            else {
                buy=prices[i];
            }
            
        }
        
        return profit;
    }
};


