class Solution {
public:
    bool checkCoPrime(int n, int m){
         if ( __gcd(n, m) == 1)
            return true;
        else
            return false;
    }
    
    int getFirstNum(int n){
        int temp;
        while(n>0){
            temp=n%10;
            n=n/10;
        }
        return temp;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1; j<nums.size();j++){
                int k = getFirstNum(nums[i]);
                int l = nums[j]%10;
                
                if(checkCoPrime(k,l)){
                    count++;
                }
            }
        }
        
        return count;
    }
};