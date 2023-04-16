class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        vector<int>k1;
        vector<int>k2;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j]==0){
                    k1.push_back(i);
                    k2.push_back(j);
                }
            }
        }
        for(int i=0;i<k1.size();i++){
            int p=k1[i];
            for(int j=0;j<v[0].size();j++){
                v[p][j]=0;
            }
        }
        for(int i=0;i<k2.size();i++){
            int p=k2[i];
            for(int j=0;j<v.size();j++){
                v[j][p]=0;
            }
        }
        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};