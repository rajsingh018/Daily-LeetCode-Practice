class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s;
        int count=0;
        for(int i=0;i<a.size();i++){ //{-2,-2,1,-2}
            if(a[i]>0 or s.empty()==true){
                s.push(a[i]);  //[5,10]
            } 
            else{
                while(!s.empty() and abs(a[i])>s.top() and s.top()>0){
                    s.pop();
                }
                if(!s.empty() and s.top()==abs(a[i])){
                    s.pop();
                }
                else{
                    if(s.empty() or s.top()<0){
                        s.push(a[i]);
                    }
                }
                
            }
        }
        vector<int>ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};