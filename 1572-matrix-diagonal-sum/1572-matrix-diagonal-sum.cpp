class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++){
            sum=sum+mat[i][i];
            cout<<sum<<endl;
        }
        int m=mat.size();
        int j=0;
        for(int i=m-1;i>=0;i--){
            sum=sum+mat[j][i];
            j=j+1;
            
            cout<<sum<<endl;
        }
        if(m%2!=0){
            int k=m/2;
            sum=sum-mat[k][k];
        }
        return sum;
    }
};