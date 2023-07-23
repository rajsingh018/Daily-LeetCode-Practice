class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        sort(arr.begin(), arr.end());
        for (auto x : arr) {
            if (mp[x] && mp[x*2]) {
                mp[x]--;
                mp[x*2]--;
            }
        }
        
        for(auto x:mp){
            if(x.second!=0){
                return false;
            }
        }
        return true;
    }
};