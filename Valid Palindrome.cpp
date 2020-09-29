/*
problem link :https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/883/
problem name:  Valid Palindrome
status: accepted
author : moahnd sakr
** */

class Solution {
public:
    bool isPalindrome(string s) {
        
    string s2=""; 
        
        
        int len=s.length(); 
        
        for(int i=0;i<len;i++){
            
            if(isalpha(s[i])||isdigit(s[i])){
            s[i]=tolower(s[i]);
            s2+=s[i];
            
        }
        }
        
        s=s2;
        reverse(s2.begin(),s2.end());
        
        return s2==s;
                            
        
        
    
    }
};
