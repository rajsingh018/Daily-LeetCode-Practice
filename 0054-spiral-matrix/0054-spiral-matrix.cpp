class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        
        int top=0, left=0, row=matrix.size(), col=matrix[0].size();
        
        while(left<col && top<row){
            //left to right
            for (int k=left; k<col; k++){
                v.push_back(matrix[left][k]);
            }
            top++;
            //top to bottom
            for (int k=top; k<row; k++){
                v.push_back(matrix[k][col-1]);
            }
            col--;

            //right to left
            if(top<row){
                for(int k=col-1; k>=left; k--){
                    v.push_back(matrix[row-1][k]);
                }
                row--;
            }

            //bottom to top
            if(left<col){        
                for (int k=row-1; k>=top; k--){
                    v.push_back(matrix[k][left]);
                }
            }
            left++;
        }
        
        return v;
        
    }
};