class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0, count2=0;
        int ele1 = INT_MIN, ele2 = INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            if(count1==0 and ele2!=nums[i]){
                count1=1;
                ele1=nums[i];
            }
            else if(count2==0 and ele1!=nums[i]){
                count2=1;
                ele2=nums[i];
            }
            else if(nums[i]==ele1) count1++;
            else if(nums[i]==ele2) count2++;
            else {
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        count1=0; count2=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==ele1) count1++;
            else if(nums[i]==ele2) count2++;
        }
        if(count1>floor(nums.size()/3)) ans.push_back(ele1);
        if(count2>floor(nums.size()/3)) ans.push_back(ele2);
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};