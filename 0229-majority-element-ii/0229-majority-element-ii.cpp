class Solution {
public:
    
    vector<int> majorityElement(vector<int>& v) {
	// Write your code here
	int n= v.size();
	map<int, int> mp;
	for(auto x:v){
		mp[x]++;
	}
	vector<int> ans;
	for(auto x:mp){
		if(x.second>floor(n/3)){
			ans.push_back(x.first);
		}
	}
	return ans;
}
};