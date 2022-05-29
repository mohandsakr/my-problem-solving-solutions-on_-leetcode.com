/*
* problem link : https://leetcode.com/problems/palindromic-substrings/
* problem name: 647. Palindromic Substrings
* Status: Accepted.
* Author : Mohand sakr.
*/



class Solution {
public:
    int countSubstrings(string s) {
        
        int len=s.length();
        
        int pal=0;
        
        for(int i=0;i<len;i++){
            
            for(int j=1;j<len+1-i;j++){
                
                string s1=s.substr(i,j);
                string s2=s1;
                reverse(s2.begin(),s2.end());                
                if(s1==s2){
                    ++pal;
                }
                
            }
        }
        
        
        return pal;
        
    }
};
