/*
problem link :https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/559/
problem name: Plus One
status: accepted
author : moahnd sakr

** */


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int len=digits.size();
        
        if(digits[len-1]<9){
           digits[len-1]+=1; 
        }
        
        else{
            
            digits[len-1]=0;
            
            if(len==1)
            {
                digits.insert(digits.begin(),1);
            }
            
        for(int i=len-2;i>=0;i--){
            
            if(i){
            if(digits[i]<9)
                
            {
                
                digits[i]+=1;
                break;
            }
            else 
            {
                digits[i]=0 ;
                
            }
            }
            else {
                if(digits[i]<9)
                {
              digits[i]+=1;
                    break;
                }
                else {
                    digits[i]=0;
                    digits.insert(digits.begin(),1);
                    
                }
                
                
            }
            
            
            
            
            
        }
            
        }
        
        
        return digits;
        
    }
};
