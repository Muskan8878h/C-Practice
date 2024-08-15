#include<bits/stdc++.h>
using namespace std; 
int main(){
    vector<int> v={2,3,4,5,6};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // vector<int> :: iterator it;

    // if we use auto we need not to declare the iterator 
    for(auto it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    // we use auto as datatype
    for(auto &value : v){ 
        value++;
    }
    cout<<"after updating the values" <<endl;
    for(int value : v){
        cout<<value<<" ";
    }
    cout<<endl;
}