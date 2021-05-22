/*
problem link :https://leetcode.com/problems/minimum-deletion-cost-to-avoid-repeating-letters/
problem name: 1578. Minimum Deletion Cost to Avoid Repeating Letters
status: Accepted
author : Moahnd sakr
** */

class Solution {
public:
    int minCost(string s, vector<int>& c) {
        
       int len=s.length();

 int prev=0;
 int ans=0;
 for(int i=1;i<len;i++){

     if(s[i]==s[prev]){

if(c[i]<=c[prev]){
    ans+=c[i];
}
else{

    ans+=c[prev];
    prev=i;


}

     }
     else{
         prev=i;
     }
      
 }
 return ans;

  
    }
};
