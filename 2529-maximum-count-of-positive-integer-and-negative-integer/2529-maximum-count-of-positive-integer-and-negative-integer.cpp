class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count_p=0, count_n=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                count_p++;
            }
            else if(nums[i]<0){
                count_n++;
            }
        }
        return max(count_p,count_n);
    }
};