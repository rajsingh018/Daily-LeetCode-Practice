//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    //Complete this function
    
    // vector<string> permutation(string s)
    // {
    //     vector<string>v;
    //     sort(s.begin(),s.end());
        
    //     do v.push_back(s);
    //     while(next_permutation(s.begin(),s.end()));
        
    //     return v;

    // }
    
    // vector<string> permutation(string S)
    // {
    //     //Your code here
    //     vector <string> ans;
    //     sort(S.begin(), S.end());
        
    //     do {
    //         ans.push_back(S);
    //     }
    //     while ( next_permutation(S.begin(), S.end()));
        
    //     return ans;
    // }
    
    vector<string> permutation(string S)

    {

        vector<string>ans;

        perm(ans,S,"");

        sort(ans.begin(),ans.end());

        return ans;

    }

    void perm(vector<string>&ans,string s,string temp)

    {

        if(s.size()==0)

        {

            ans.push_back(temp);

            return;

        }

        for(int i=0;i<s.size();i++)

        {

            char ch=s.at(i);

            temp+=ch;

            s.erase(s.begin()+i);

            perm(ans,s,temp);

            temp.erase(temp.end()-1);

            s.insert(s.begin()+i,ch);

        }

    }


};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends