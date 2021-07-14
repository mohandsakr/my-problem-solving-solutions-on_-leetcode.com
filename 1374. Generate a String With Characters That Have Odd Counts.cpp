/*
problem link : https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/
problem name: 1374. Generate a String With Characters That Have Odd Counts
Status: Accepted.
Author : Mohand sakr.
** */
class Solution {
public:
    string generateTheString(int n) {
        
    
        string s="";
        if(n&1)
        {   
            
            for(int i=0;i<n;i++){
                s+="a";
            }
            
            
        }
        else{
            s+="a";
            for(int i=0;i<n-1;i++){
                s+="b";
            }
            
            
        }
         
     return s;
    }
};
