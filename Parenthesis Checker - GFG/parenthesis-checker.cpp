//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>s;
        for(auto a:x){
            if(a=='[' or a=='(' or a=='{'){
                s.push(a);
            }
            else{
                if(s.empty()){
                    return false;
                }
                if(a==']' and s.top()!='[' or a==')' and s.top()!='(' or a=='}' and
                s.top()!='{'){
                    return false;
                }
                else{
                    s.pop();
                }
            }
        }
        if(s.empty()!=1){
            return false;
        }
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends