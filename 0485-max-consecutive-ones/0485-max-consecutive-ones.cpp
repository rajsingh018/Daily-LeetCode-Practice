class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0, count=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                res=max(count,res);
                count=0;
            }
            
        }
        res=max(count,res);
        return res;
    }
};