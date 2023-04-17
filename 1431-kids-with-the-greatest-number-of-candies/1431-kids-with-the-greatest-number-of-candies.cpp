class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int m=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            int s;
            s=candies[i]+extraCandies;
            candies[i]=s;
        }
        for(int i=0;i<candies.size();i++){
            cout<<candies[i]<<" ";
            if(candies[i]>=m){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};