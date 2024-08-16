#include<bits/stdc++.h>
using namespace std;
void printset(set<string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
    // both are correct to print value of set
    // for(auto it =s.begin();it!=s.end();it++){
    //     cout<<(*it)<<endl;
    // }

}
int main(){
    set<string> s;
    s.insert("abc"); // O(log(n))
    s.insert("xyz");
    s.insert("pqr");
    auto it=s.find("abc");
    if(it!=s.end()){
        // cout<<"exist " <<(*it)<<endl;
        s.erase(it);
    }
    printset(s);
    
}