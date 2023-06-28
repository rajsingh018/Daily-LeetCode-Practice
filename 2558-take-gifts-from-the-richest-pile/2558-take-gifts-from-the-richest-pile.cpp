class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        sort(gifts.begin(),gifts.end());
        while(k--){
            int last = gifts.size()-1;
            gifts[last]=floor(sqrt(gifts[last]));
            sort(gifts.begin(),gifts.end());
        }
        long long sum=0;
        for(auto x:gifts){
            sum=sum+x;
        }
        return sum;
    }
};