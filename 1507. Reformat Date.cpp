/*
problem link :https://leetcode.com/problems/reformat-date/
problem name: 1507. Reformat Date
Status: Accepted.
Author : Mohand sakr.
** *


class Solution {
public:
    string reformatDate(string date) {
        
        string answer="";
        map<string,string> month;
        
        month["Jan"]="01";
         month["Feb"]="02";
         month["Mar"]="03";
         month["Apr"]="04";
         month["May"]="05";
         month["Jun"]="06";
         month["Jul"]="07";
         month["Aug"]="08";
         month["Sep"]="09";
         month["Oct"]="10";
         month["Nov"]="11";
         month["Dec"]="12";
        
        string day=date.substr(0,date.find(" "));
        day=(day.substr(0,day.length()-2));
        if(day.length()<2){
           day="0"+day;
             
        }
        date.erase(0,date.find(" ")+1);
        
        string months=month[date.substr(0,date.find(" "))];
         date.erase(0,date.find(" ")+1);
        
        
        
        answer+=date+"-";
        answer+=months+"-";
        answer+=day;
        
        return answer;
    
    }
};
