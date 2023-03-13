#include <iostream>
#include<algorithm>
using namespace std;

void doCount(int arr[],int n){
    sort(arr,arr+n);
    int k=arr[n-1];
    int v[k+1];
    for(int i=0;i<=k;i++){
        v[i]=0;
    }
    for(int i=0;i<n;i++){
        v[arr[i]]=v[arr[i]]+1;
    }
    
    
    for(int i=0;i<=k;i++){
        if(v[i]>0){
            cout<<i<<" "<<v[i]<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    doCount(arr,n);
    return 0;
}
