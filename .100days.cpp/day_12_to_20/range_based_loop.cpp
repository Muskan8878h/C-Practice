#include<bits/stdc++.h>
using namespace std; 
int main(){
    vector<int> v={2,3,4,5,6};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for(int &value : v){ //if we not use & it is just a copy else it refres thr address
        value++;
    }
    cout<<"after updating the values" <<endl;
    for(int value : v){
        cout<<value<<" ";
    }
    cout<<endl;
}