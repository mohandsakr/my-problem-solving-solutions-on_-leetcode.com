//============================================================================
//problem link:https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
// Name        : .cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
            }
        }
        return nums.size();
    }
int main() {
	int n;
	cin>>n;
	 vector<int>nums;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
	nums.push_back(x);

}

	cout<<removeDuplicates(nums);
	return 0;
}
