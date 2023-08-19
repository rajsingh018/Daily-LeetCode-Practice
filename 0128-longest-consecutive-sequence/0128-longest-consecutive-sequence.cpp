class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        if(a.size()==0) return 0;
        unordered_set<int>s;
        for(int i=0; i<a.size(); i++){
            s.insert(a[i]);
        }
        a.clear();
        for(auto x:s){
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        int count=1;
        int ans=INT_MIN;
        for(int i=a.size()-1; i>=1; i--){
            // cout<<abs(a[i]-a[i-1])<<endl;
            if(abs(a[i]-a[i-1])!=1){
                ans=max(ans, count);
                count=1;
            }
            else count++;
        }
        ans=max(ans, count);
        return ans;
    }
};