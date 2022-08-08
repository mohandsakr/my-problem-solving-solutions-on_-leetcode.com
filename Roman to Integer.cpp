/*
* problem link :https://leetcode.com/problems/roman-to-integer/
* problem name: 13. Roman to Integer
* Status: Accepted.
* Author : Mohand sakr.
*/


class Solution {
public:
  int romanToInt(string s) {
        map <char,int> ma;
        ma['I']=1;
        ma['V']=5;
        ma['X']=10;
        ma['L']=50;
        ma['C']=100;
        ma['D']=500;
        ma['M']=1000;
        int len=s.length();
        int sum=0;
        int past=0;
        for(int i=0;i<len;i++){
            int current=ma[s[i]];
            if(current<=past){
            sum+=current;
            past=current;
            
            }
            else {
                sum-=past;
                sum+=(current-past);
                past=current;
            }
            
        }
        return sum;
    }
};
