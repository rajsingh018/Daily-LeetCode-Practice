//Learning Unordered_map

#include <iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int>k;
    k.insert({"Hello",5});
    k.insert({"Hell",4});
    k.insert({"Hel",3});
    k.insert({"He",2});
    
    for(auto x:k){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    for(auto it=k.begin();it!=k.end();it++){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    
    if(k.count("Hell")){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"NOT FOUND"<<endl;
    }
    
    if(k.find("Hell")!=k.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"NOT FOUND"<<endl;
    }

    return 0;
}
