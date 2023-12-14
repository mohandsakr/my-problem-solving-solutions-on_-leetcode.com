

/*
problem link: https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/
problem name: 2482. Difference Between Ones and Zeros in Row and Column.cpp
Status: Accepted.
Author: Mohand sakr.
** */


class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row=grid.size();
        int coloumn=grid[0].size();
vector<vector<int>> result;
int onesRow[100005]={};
int onesCol[100005]={};
int zerosRow[100005]={};
int zerosCol[100005]={};

for(int i=0;i<row;i++){
    for(int j=0;j<coloumn;j++){
        
        if(grid[i][j]==0){
            ++ zerosRow[i];
            ++ zerosCol[j];

        }
        else if(grid[i][j]==1){
           ++ onesRow[i];
           ++ onesCol[j];
        }



    }
}

for(int i=0;i<row;i++){
        vector<int> vect;
    for(int j=0;j<coloumn;j++){
        vect.push_back(onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j]);
    }
    result.push_back(vect);
}

return result;

    }
};
