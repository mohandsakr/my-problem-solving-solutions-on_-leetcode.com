/*
* Problem link: https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/
* Problem name: 1287. Element Appearing More Than 25% In Sorted Array 
* Status: Accepted.
* Author: Mohand sakr.
** */


class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        int len=arr.size();
        int occurance=0;
        int last=0;
        int item=arr[0];
        int result=arr[0];
        for(int i=1;i<len;i++){
 if(occurance>last){
        last=occurance;
        result=item;
    }
if(arr[i-1]==arr[i]){
    ++ occurance;
    item=arr[i];
}
else{
    occurance=1;
    item=arr[i];
}
        }
         if(occurance>last){
        last=occurance;
        result=item;
    }
        return result;
    }
};
