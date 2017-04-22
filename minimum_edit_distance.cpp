//============================================================================
//problem link :https://leetcode.com/problems/edit-distance/#/description
// Name        : minimum_edit_distance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================

#include <iostream>
#include<utility>
#include<string>
using namespace std;
int mini(int a,int b,int c){
	if(a<b&&a<c)
		return a;
	else if(b<a&&b<c)
		return b;
	else
		return c;

}
int get_min_edit_distace(string s1,string s2){
	int m ,n;
	m=s1.length();
	n=s2.length();
	int dMatrix[m+1][n+1];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0){
				dMatrix[i][j]=j;
			}
			else if(j==0){
				dMatrix[i][j]=i;
			}
			else if(s1[i-1]==s2[j-1])
			{
				dMatrix[i][j]=dMatrix[i-1][j-1];
			}
			else
				dMatrix[i][j]=1+mini(dMatrix[i-1][j],dMatrix[i][j-1],dMatrix[i-1][j-1]);
		}
	}
	return dMatrix[m][n];
}

int main() {
	string s1,s2;
	cin>>s1>>s2;
	cout<<get_min_edit_distace(s1,s2);

	return 0;
}
