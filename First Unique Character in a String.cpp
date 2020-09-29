
/*
problem link :https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/881/
problem name: First Unique Character in a String
status: accepted
author : moahnd sakr
** */


class Solution {
public:
    int firstUniqChar(string s) {
         int arr[26]={};

        int len=s.length();
        for(int i=0;i<len;i++){
            ++arr[s[i]-'a'];
          
        }
        
 for(int i=0;i<len;i++){
            if(arr[s[i]-'a']==1) return i;
          
        }    
        
        
        return -1;   
    }
};
