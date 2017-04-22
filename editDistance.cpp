//============================================================================
//problem link :https://leetcode.com/problems/edit-distance/#/description
// Name        : minimum_edit_distance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================
/*
 * note this solution using dynamic programming technique .
 *
 *
 * */

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
int get_min_edit_distace(string word1,string word2)
{
	int m ,n;
	m=word1.length();//m is the length of the first string
	n=word2.length();//n is the length of the second string
	int dMatrix[m+1][n+1];//the matrix
	for(int i=0;i<=m;i++){//initialize  the first column
		dMatrix[i][0]=i;
	}
	for(int i=0;i<=n;i++){//initialize the first row
		dMatrix[0][i]=i;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++){
			if(word1[i-1]==word2[j-1])
				dMatrix[i][j]=dMatrix[i-1][j-1];
			else
				dMatrix[i][j]=mini(dMatrix[i-1][j],dMatrix[i][j-1],dMatrix[i-1][j-1])+1;
		}

	}
	return dMatrix[m][n];
}

int main() {
	string word1,word2;
	cin>>word1>>word2;
	cout<<get_min_edit_distace(word1,word2);

	return 0;
}
