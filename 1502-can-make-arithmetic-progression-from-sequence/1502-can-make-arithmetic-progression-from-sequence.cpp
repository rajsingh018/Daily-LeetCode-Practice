class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>v;
        for (int i=0; i<arr.size()-1; i++){
            v.push_back(arr[i]-arr[i+1]);
        }
        set<int>s;
        for(int i=0;i<v.size();i++){
            s.insert(v[i]);
        }
        if(s.size()>1){
            return false;
        }
        return true;
    }
};