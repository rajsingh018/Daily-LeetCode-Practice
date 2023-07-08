//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    
    public:
        stack<int> s;
        stack<int> s2;
       /*returns min element from stack*/
       int getMin(){
           
           if(s2.empty()){
               return -1;
           }
           return s2.top();
           
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(s.empty()){
               return -1;
           }
           int k=s.top();
           if(s.top()==getMin()){
               s2.pop();
           }
           s.pop();
           return k;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           s.push(x);
           if(s2.empty()or x<= getMin()){
               s2.push(x);
           }
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends