/*
problem link :https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
problem name:921. Minimum Add to Make Parentheses Valid
status: accepted
author : moahnd sakr

*/


class Solution {

public:

    int minAddToMakeValid(string s) {
        
        int items=0;
  int textLength=s.length();
  stack<char>  st;
  
  for( int i=0;i<textLength;i++){
    if(st.empty())
    {
     if( s[i]=='('){
      st.push(s[i]);
     }
      else{
        ++items;
      }
    }
    
    else 
    {
      
      char topitem=st.top();
      if(s[i]=='(')
        st.push(s[i]);
      else {
        
        if(topitem=='('&&s[i]==')')
        {
          st.pop();
        }
        else {
          ++items; 
        }
        
        
      } 
      
    }
      
    }

    return items+st.size();
 
    }
};
