/*
problem link: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
problem name: 1582. Special Positions in a Binary Matrix
Status: Accepted.
Author: Mohand sakr.
** */


class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) { 
        int lenR=mat.size();
        int lenC=mat[0].size();

int rows[100]={};

int coloumns[100]={};

for(int i=0;i<lenR;i++){
    int sumRow=0;
    int sumCoulumn=0;
  for(int j=0;j<lenC;j++){
      sumRow+=mat[i][j];
    }
    rows[i]=sumRow;


}

for(int i=0;i<lenC;i++){
    int sumCoulumn=0;
  for(int j=0;j<lenR;j++){
      sumCoulumn+=mat[j][i];
    }
     
    coloumns[i]=sumCoulumn;

    cout<<i << "  "<<sumCoulumn<<endl;

}

int result=0;

for(int i=0;i<lenR;i++){
    for(int j=0;j<lenC;j++){
        if(rows[i]==1 && coloumns[j]==1 && mat[i][j])
        {
            ++result;
        }

}
}

return result;
        
    }
};
