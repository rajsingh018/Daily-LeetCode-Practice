//MAJORITY ELEMENT

#include <iostream>

using namespace std;
int majorityElement(int arr[], int n){
    int count=1;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>(n/2)){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={20,30,40,50,50,50,50};
    int n=7;
    
    cout<<majorityElement(arr,n);

    return 0;
}
