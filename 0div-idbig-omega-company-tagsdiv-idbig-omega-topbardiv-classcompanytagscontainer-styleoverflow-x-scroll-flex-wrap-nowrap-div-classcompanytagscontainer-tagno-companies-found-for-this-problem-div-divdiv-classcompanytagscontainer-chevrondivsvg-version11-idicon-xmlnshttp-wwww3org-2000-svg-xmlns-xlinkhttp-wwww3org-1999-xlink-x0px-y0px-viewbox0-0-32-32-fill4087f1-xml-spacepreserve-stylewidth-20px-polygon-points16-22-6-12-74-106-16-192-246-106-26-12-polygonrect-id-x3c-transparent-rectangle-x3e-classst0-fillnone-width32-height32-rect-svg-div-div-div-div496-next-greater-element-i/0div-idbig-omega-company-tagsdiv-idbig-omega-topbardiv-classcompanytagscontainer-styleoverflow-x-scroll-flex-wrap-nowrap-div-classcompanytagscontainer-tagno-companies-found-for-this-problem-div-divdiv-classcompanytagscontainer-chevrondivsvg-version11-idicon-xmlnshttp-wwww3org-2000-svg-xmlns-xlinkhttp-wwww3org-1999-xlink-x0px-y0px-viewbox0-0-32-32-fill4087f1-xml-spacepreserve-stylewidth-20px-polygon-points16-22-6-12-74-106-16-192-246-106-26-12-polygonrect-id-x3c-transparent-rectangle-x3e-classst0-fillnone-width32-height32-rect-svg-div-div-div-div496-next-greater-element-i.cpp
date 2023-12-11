class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> put;

        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            if (st.empty()) {
                put.push_back(-1);
            } else {
                put.push_back(st.top());
            }

            st.push(nums2[i]);
        }

        reverse(put.begin(), put.end());
        unordered_map<int, int> mp;
        for(int i=0; i<put.size(); i++){
            mp[nums2[i]]=put[i];
        }
        put.clear();
        for (int key : nums1) {
            if (mp.find(key) != mp.end()) {
                put.push_back(mp[key]);
            } 
            else {
                put.push_back(-1);
            }
            
        }
        return put;
    }
};