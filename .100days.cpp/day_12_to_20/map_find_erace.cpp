#include<bits/stdc++.h>
using namespace std;
void printmap(map<int,string> m){
    cout<<"size"<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){
    map<int, string> m;
    m[1] ="abc";  //O(log(n))
    m[5] ="pqr";
    m[3] ="xyz";
    m[5] ="cde"; 
    m.insert({4,"mno"}); 

    // m.clear(); //clear all key value pair 
    // auto it=m.find(6);
    auto it=m.find(3); 

    //time complixity: O(log(n))

    m.erase(5); //if here we give value that dosent exist that is return segmentation fault 
    if(it==m.end()){
        cout<<"no value exits"<<endl;
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    printmap(m);
    
}