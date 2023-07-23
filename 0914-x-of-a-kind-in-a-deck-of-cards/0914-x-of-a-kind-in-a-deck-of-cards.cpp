class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        for(auto x:deck){
            mp[x]++;
        }
        int res=0;
        for(auto pr:mp)
        {
            res=__gcd(pr.second,res);
        }
        return res>=2;
    }
};