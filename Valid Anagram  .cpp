/*
problem link :https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/882/
problem name:  Valid Anagram

status: accepted
author : moahnd sakr
** */

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};
