//Sample Problem: Vector

#include <iostream> 
#include <vector> 
using namespace std; 

vector <int> getSmaller(int arr[], int n, int k){
    vector <int> res;
    for(int i = 0; i < n; i++)
        if(arr[i] < k)
            res.push_back(arr[i]);
    
    return res;
}
  
int main() 
{ 
    int arr[] = {10, 5, 30, 40, 20};
    vector <int> res = getSmaller(arr, 5, 25);
    for(auto it=res.begin(); it!=res.end(); it++){
        cout<<*it<<" ";
    }
    return 0; 
}
