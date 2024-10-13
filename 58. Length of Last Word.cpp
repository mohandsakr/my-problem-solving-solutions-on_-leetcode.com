/*
problem link : https://leetcode.com/problems/length-of-last-word/description/
problem name: 58. Length of Last Word
Status: Accepted.
Author : Mohand sakr.
** */

class Solution {
public:
    int lengthOfLastWord(string s) {

        int len=s.length();
        vector<string> vect;
string word="";
        for(int i=0;i<len;i++){
            
if(s[i]!=' '){
    word+=s[i];
}
else{
    if(word.length()>0){
    vect.push_back(word);
    cout<<word<<endl;
    word="";
    }
}

        }
        if(word.length()>0){
        vect.push_back(word);
        }

int vectlen=vect.size()-1;
 
        return vect[vectlen].length();
        
    }
};
