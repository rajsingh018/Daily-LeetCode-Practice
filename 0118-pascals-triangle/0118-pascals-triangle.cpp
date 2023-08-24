class Solution {
public:
    vector<int> generateRow(int row){
        vector<int> ans;
        long long k=1;
        ans.push_back(1);
        for(int i=1; i<row; i++){
            k = k * (row - i);
            k=k/i;
            ans.push_back(k);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};