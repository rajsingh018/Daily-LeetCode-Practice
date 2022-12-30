
#include <iostream>

using namespace std;

int fun(int arr[], int n){
    int x=0, pos=0, first=arr[0], sum=0;
    for(int j=1;j<n;j++){
        if(first<=arr[j]){
            x=x+((pos*first)-sum);
            first=arr[j];
            pos=0;
            sum=0;
        }
        else{
            sum=sum+arr[j];
            pos++;
        }
    }
    if(arr[n-1]<first){
        x=x+((pos*arr[n-1])-sum);
    }
    return x;
}

int main()
{
    int arr[]={3,0,1,2,5};
    int n=5;
    
    cout<<fun(arr,n);

    return 0;
}
