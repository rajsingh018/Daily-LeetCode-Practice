class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore's Algorithm
            int count=0, ele=0;
            for(int i=0; i<nums.size(); i++){
                if(count==0){
                    ele=nums[i];
                    count++;
                }
                else{
                    if(ele==nums[i]){
                        count++;
                    }
                    else{
                        count--;
                    }
                }
            }
            return ele;
    }
};