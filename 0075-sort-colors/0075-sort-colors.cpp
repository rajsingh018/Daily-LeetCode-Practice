class Solution {
public:
    void sortColors(vector<int>& v) {
        int zero=0, one=0, two=0;
        int z=v.size();
        for(int i=0;i<z;i++){
            if(v[i]==0){
                zero++;
            }
            if(v[i]==1){
                one++;
            }
            if(v[i]==2){
                two++;
            }
        }
        v.clear();
        while(v.size()!=z){
            if(zero>0){
                v.push_back(0);
                zero--;
            }
            if(zero==0 and one>0){
                v.push_back(1);
                one--;
            }
            if(zero==0 and one==0 and two>0){
                v.push_back(2);
                two--;
            }
        }
    }
};