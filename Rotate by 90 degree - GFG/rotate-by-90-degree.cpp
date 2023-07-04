//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


// } Driver Code Ends

//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
void rotate(vector<vector<int> >& v)
{
    // Your code goes here
    // for(int i=0; i<v.size(); i++){
    //     for(int j=v[i].size()-1; j>=0; j--){
            
    //     }
    // }
    vector<vector<int>>ans;
    for(int i=v[0].size()-1; i>=0; i--){
        vector<int>k;
        for(int j=0; j<v.size(); j++){
            
            k.push_back(v[j][i]);
        }
        ans.push_back(k);
    }
    v=ans;
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}


// } Driver Code Ends