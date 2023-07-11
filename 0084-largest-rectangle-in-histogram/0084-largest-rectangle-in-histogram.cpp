class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int res=0, area;
        stack<int>s;
        int n=h.size();
        for(int i=0;i<n;i++){
            while(!s.empty() and h[s.top()]>=h[i]){
                int ans=s.top();
                s.pop();
                area=h[ans]* (s.empty()? i : i-s.top()-1);
                res=max(res,area);
                
            }
            s.push(i); 
        }
        while(!s.empty()){
            int ans=s.top();
            s.pop();
            area=h[ans]* (s.empty()? n : n-s.top()-1);
            res=max(res,area);
        }
        return res;
    }
};