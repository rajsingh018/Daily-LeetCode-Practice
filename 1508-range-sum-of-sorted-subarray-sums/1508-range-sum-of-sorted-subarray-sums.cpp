class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int sum1=0;
        long sum2=0;
        vector <int> v;
        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sum1=sum1+nums[j];
                v.push_back(sum1);
            }
            sum1=0;
        }
        sort(v.begin(),v.end());
        
        for(int i=left-1;i<right;i++){
            sum2=sum2+v[i];
        }
        
        return sum2%(1000000007);
    }
};