/*
problem link: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
problem name: 104. Maximum Depth of Binary Tree
Status: Accepted.
Author: Mohand sakr.
** */

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
string answer="";
        int len=words.size();

        for(int i=0;i<len;i++){
            string s=words[i];
            reverse(s.begin(),s.end());
            if(words[i]==s){
            answer= words[i];
            break;
            }
        }

        return answer;
        
    }
};
