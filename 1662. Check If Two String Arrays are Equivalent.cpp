/*
problem link: https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
problem name: 1662. Check If Two String Arrays are Equivalent
Status: Accepted.
Author: Mohand sakr.
** */


class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

int word1Length=word1.size();
int word2length=word2.size();


string s1="";
string s2="";

for(int i=0;i<word1Length;i++)
{
s1+=word1[i];

}

for(int j=0;j<word2length;j++){
s2+=word2[j];

}

return s1==s2;
        
    }
};
