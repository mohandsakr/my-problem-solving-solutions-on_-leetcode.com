/*
problem link: https://leetcode.com/problems/transpose-matrix/
problem name: 867. Transpose Matrix
Status: Accepted.
Author: Mohand sakr.
** */




class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        vector<vector<int>>vect;
        

        int x=matrix.size();
        int y=matrix[0].size();
 

  
        for(int i=0;i<y;i++){
            vector<int> ve;
            for(int j=0;j<x;j++){

                ve.push_back(matrix[j][i]);
             }
            vect.push_back(ve);
        }
        return vect;
    }
};
