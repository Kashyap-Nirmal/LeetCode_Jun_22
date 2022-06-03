class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j;
        for(i=0;i<matrix.size();i++)
        {
            for(j=i;j<matrix.size();j++)
            {
                swap(matrix[j][i],matrix[i][j]);
            }
        }
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix.size()/2;j++)
            {
                swap(matrix[i][j],matrix[i][matrix.size()-1-j]);
            }
        }        
    }
};