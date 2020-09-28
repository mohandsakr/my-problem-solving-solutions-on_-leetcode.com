
/*
problem link :https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/567/
problem name:  Move Zeroes
status: accepted
author : moahnd sakr
** */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int len=nums.size();
        int index=0;
        
        for(int i=0;i<len;i++){
            
            if(nums[i]){
                
             
                int temp= nums[i];
                
                nums[index]= temp;
                    
                    ++index;
                    
                
                 
                
            }
                
                
        }
        
        for(int i=index;i<len;i++){
            nums[i]=0;
        }
        
         
        
      
        
    }
};
