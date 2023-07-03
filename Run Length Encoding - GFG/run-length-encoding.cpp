//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  string str="";
  str=src[0];
  char a= src[0];
  int count=1;
  for(int i=0; i<src.size(); i++){
      
        if(src[i]!=src[i+1]){
          str=str+to_string(count);
        //   char d=src[i]
          str=str+src[i+1];
          count=1;
        }
        else{
            count++;
        }
  }
  return str;
} 
