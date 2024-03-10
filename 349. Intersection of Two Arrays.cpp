/*
problem link: https://leetcode.com/problems/intersection-of-two-arrays
problem name: 349. Intersection of Two Arrays
Status: Accepted.
Author: Mohand sakr.
** */

class Solution {

public:

int arr[1001]={};
int arr2[1001]={};
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> se;
                set<int> ::iterator it;

        vector<int> vect;
        int len1=nums1.size();
        int len2=nums2.size();

        for(int i=0;i<len1;i++){
            
            ++arr[nums1[i]];
        }

        for(int i=0;i<len2;i++){
          ++arr2[nums2[i]];
        }


    for(int i=0;i<=1000;i++){

 int j=min(arr[i],arr2[i]);

 for(j;j>0;j--){
     se.insert(i); 
 }

}

for(it=se.begin();it!=se.end();it++){
     vect.push_back(*it);
 }
return vect;

    }
};
