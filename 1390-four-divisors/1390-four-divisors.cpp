class Solution {
public:
    pair<bool,int> fun(int n){
        pair<bool,int> p=make_pair(false,0);
        int sum=0,count=0;
        for(int i=1; i<=sqrt(n); i++){
            if(n%i==0){
                sum=sum+i;
                count++;
                if(i*i!=n){
                    sum=sum+(n/i);
                    count++;
                }
            }
        }
        if(count==4){
            p.first=true;
        }
        p.second=sum;
        return p;
    }
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size();i++){
            pair<bool, int> p = fun(nums[i]);
            if(p.first==true){
                sum=sum+p.second;
            }
        }
        return sum;
        
    }
};