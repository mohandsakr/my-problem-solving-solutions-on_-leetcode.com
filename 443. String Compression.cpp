/*
problem link :https://leetcode.com/problems/string-compression/
problem name: 443. String Compression
status: Accepted
author : Moahnd sakr
** */


class Solution {
public:
    int compress(vector<char>& chars) {
        
        string s="";
        char currentChar=chars[0];
        int frequancy=1;
        int charsLength=chars.size();
        int curindex=0;
            for(int i=1;i<charsLength;i++){
                if(currentChar==chars[i]){
                    ++frequancy;
                }
                else {
                   s+=currentChar;
                    if(frequancy>1)
                    {
                       s+= to_string(frequancy);
                     }
                    
                    currentChar=chars[i];
                    frequancy=1;
                }
                
            }
        
         s+=currentChar;
        if(frequancy>1){
          s+= to_string(frequancy);
         }
        int answer= s.length();
        for(int i=0;i<answer;i++){
          chars[i]=s[i];
        }
        
        
        
        return answer ;
        
    }
};
