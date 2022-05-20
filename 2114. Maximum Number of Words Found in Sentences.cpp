/*
* problem link : https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
* problem name: 2114. Maximum Number of Words Found in Sentences
* Status: Accepted.
* Author : Mohand sakr.
*/


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int len=sentences.size();
        int max=0;
        
        for(int i=0;i<len;i++){
        
            int words=count(sentences[i].begin(),sentences[i].end(),' ');
            ++words;
            
            if(words>max)
                max=words;
        
            
        }
        
        return max;
    }
};
