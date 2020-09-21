/*
problem link :https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/727/
problem name  Remove Duplicates from Sorted Array
status: accepted
author : moahnd sakr
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        set<int> se;
        set<int> ::iterator it;

      
        
        int val=0;
        
        
        int len=nums.size();
        
        
        for(int i=0;i<len;i++){
                        se.insert(nums[i]);
   
        }
        int j=0;
        
        for(it=se.begin();it!=se.end();it++,j++){
            nums[j]=*it;
        }
        
        
    
        
        
return se.size();
        
        
        
    }
};
