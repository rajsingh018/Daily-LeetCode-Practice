class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=0;
        vector<vector<int>> ans;
        while(n<matrix[0].size()){
            vector<int>v;
            for(int i=0; i<matrix.size();i++){
                v.push_back(matrix[i][n]);
            }
            ans.push_back(v);
            n++;
        }
        return ans;
    }
};