class Solution {
public:
    string reverseWords(string s) {
        int j=0;
        stack<string>st;
        for(int i=0; i<s.size();i++){
            
            if(s[i]==' '){
                string str;
                for(int k=j; k<i; k++){
                    str=str+s[k];
                }
                st.push(str);
                j=i+1;
            }
        }
        string str;
        for(int k=j; k<s.size();k++){
            
            str=str+s[k];
        }
        st.push(str);
        string ans="";
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
            ans=ans+" ";
        }
        
        ans.erase(s.size(), 1);
        queue<char>q;
        for(int i=0; i<ans.size(); i++){
            if(ans[i]==' '){
                if(q.empty()==false and q.back()!=' '){
                    q.push(ans[i]);
                }
            }
            else{
                q.push(ans[i]);
            }
        }
        ans="";
        while(!q.empty()){
            ans=ans+ q.front();
            q.pop();
        }
        int i=ans.size()-1;
        int count=0;
        while(count==0){
            if(ans[i]==' '){
                ans.erase(i, 1);
            }
            else{
                count++;
            }
        }
        return ans;
    }
};