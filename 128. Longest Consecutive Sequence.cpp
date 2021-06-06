/*
problem link : https://leetcode.com/problems/longest-consecutive-sequence/
problem name: 128. Longest Consecutive Sequence 
Status: Accepted
Author : Moahnd sakr
** */

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
         int maxi=0;
        int len=nums.size();
        
        if(len>0){
        set<int> se;
        set<int> :: iterator it;
        
        for(int i=0;i<len;i++){
            
            se.insert(nums[i]);
        }
        
            it=se.begin();
            
        int answer=1;
        int prev=*it;
            ++it;
            
        for(;it!=se.end();it++){
            
            int cur=*it;
            if(cur-prev==1){
                ++answer;
            }
            else{
                maxi=max(answer,maxi);
                answer=1;
            }
                            prev=*it;

          
            
        }
         maxi=max(answer,maxi);

        
        
        }
        
        
return maxi;
      
        
        
        
    }
};
