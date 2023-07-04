//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    
    string reverseWords(string s) 
    { 
        // string ans="";
        // for(int i=s.size()-1; i>=0; i--){
        //     if(s[i]=='.'){
        //         for(int j=i+1;j<s.size() and s[j]!='.'; j++){
        //             ans=ans+s[j];
        //         }
        //         ans=ans+'.';
        //     }
        // }
        // for(int i=0;i<s.size();i++){
        //     while(s[i]!='.'){
        //         ans=ans+s[i];
        //     }
        // }
        // return ans;
        
        stack<string>stk;
        string str="";
        for(int i=0; i<s.size(); i++){
            if(s[i]!='.'){
                str= str+s[i];
            }
            else{
                stk.push(str);
                str="";
            }
        }
        str=str+'.';
        while(!stk.empty()){
            string k=stk.top();
            str=str+k+'.';
            stk.pop();
        }
        str.erase(str.end()-1);
        return str;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends