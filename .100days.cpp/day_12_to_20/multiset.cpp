#include<bits/stdc++.h>
using namespace std;
void printset(multiset<string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
}
int main(){
    multiset<string> s;
    s.insert("abc"); // O(log(n))
    s.insert("xyz");
    s.insert("pqr");
    s.insert("abc");
    auto it=s.find("abc");
    // if we pass an iterator to erase function it erase value at that address only this methode is recommended
    if(it!=s.end()){
        // cout<<"exist " <<(*it)<<endl;
        s.erase(it);
    }
    // but if we use value it remove all the values which match
    // s.erase("abc");  
    printset(s);
    
}