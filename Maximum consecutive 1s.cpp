#include <iostream>

using namespace std;

int max_1(int arr[], int n){
    int max=0, count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(max<count){
                max=count;
            }
        }
        else{
            count=0;
        }
    }
    return max;
}

int main()
{
    int arr[]={0,1,1,0,1,0};
    int n=6;
    
    cout<<max_1(arr,n);

    return 0;
}
