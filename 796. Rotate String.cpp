/*
problem link : https://leetcode.com/problems/rotate-string/
problem name: 796. Rotate String.cpp
Status: Accepted.
Author : Mohand sakr.
** 
*/


class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int len=s.length();
            
        bool can=0;
            for(int i=0;i<len;i++){
                
                string s1=s.substr(len-1,1);
                 s=s.substr(0,len-1);
                  s1+=s;
                s=s1;
                 
                if(s==goal){
                    can=true;
                }
            }
        return can;
    }
};
