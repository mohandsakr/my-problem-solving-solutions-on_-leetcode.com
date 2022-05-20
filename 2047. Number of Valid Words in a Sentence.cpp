/*
* problem link : https://leetcode.com/problems/number-of-valid-words-in-a-sentence/
* problem name: 2047. Number of Valid Words in a Sentence
* Status: Accepted.
* Author : Mohand sakr.
*/

class Solution {
public:
    int countValidWords(string s) {
        
        int len=s.length();
        
        vector<string> vect;
        
        while(s.length()>0){
            
            int spacePlace=s.find(' ');
            if(spacePlace!=-1){
            string token=s.substr(0,spacePlace);
                if(count(token.begin(),token.end(),' ')!=token.length())
                {
          vect.push_back(token);
                }
            s.erase(s.begin(),s.begin()+spacePlace+1);
            }
            else {
                vect.push_back(s);
                break;
            }
            
        }
        
        int vectlen=vect.size();
        int validWord=0;
        
        for(int i=0;i<vectlen;i++){
            
            if(isvalid(vect[i])){
                ++validWord;
            }
             
        }
         
        return validWord;
    }
    
    
    bool isvalid(string s){
        
        int len=s.length();
    int count=0;
        int hyphen =0;
        
        for(int i=0;i<len;i++){
            
            if(len==1){
                if((s[i]>='a'&&s[i]<='z')||s[i]=='!'||s[i]=='.'||s[i]==',')
                    ++count;
            }
            else {
            
            if(!i){
                
               if(s[i]>='a'&&s[i]<='z') ++count;
            }
            else if(i==len-1){
                if((s[i]>='a'&&s[i]<='z') ||s[i]=='.'||s[i]==','||s[i]=='!'){
                    
                    ++count;            
                }
            }
            else {
                if ((s[i]>='a'&&s[i]<='z')||  
                   (s[i]=='-'&&(s[i-1]>='a'&&s[i-1]<='z')&&(s[i+1]>='a'&&s[i+1]<='z')))
                {
                    if(s[i]=='-')
                    {
                        ++hyphen; 
                    }
                    ++count;
                }                
            }
        }
        }
        
        if(hyphen>1) return 0;
       
     return (count==len);     
    }
};
