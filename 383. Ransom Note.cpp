/*
problem link: https://leetcode.com/problems/ransom-note/description/
problem name: 383. Ransom Note
Status: Accepted.
Author: Mohand sakr.
** */

class Solution {
    int arr[26] ={};
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
 
 int len=magazine.length();

 for(int i=0;i<len;i++){
++arr[magazine[i]-'a'];
 }
 int len2=ransomNote.length();

 for(int i=0;i<len2;i++){

    if(arr[ransomNote[i]-'a']>0){
        --arr[ransomNote[i]-'a'];
    }
    else {
        return false;
    }

 }

 return true;

     
        
    }
};
