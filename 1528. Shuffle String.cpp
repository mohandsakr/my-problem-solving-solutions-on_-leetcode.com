
/*
problem link : https://leetcode.com/problems/shuffle-string/
problem name: 1528. Shuffle String
Status: Accepted.
Author : Mohand sakr.
** */




class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
            int len=indices.size();
        string s2=s;
        for(int i=0;i<len;i++){
            s2[indices[i]]=s[i];
        }
        
        return s2;
        
    }
    
};
