// uses HASH for inbuilt implementation
#include<bits/stdc++.h>
using namespace std;
void printmap(unordered_map<int,string> m){
    cout<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){
    unordered_map<int, string> m;
    // we can use map where we need to comapre 
    // we can't use unordered map for comparision
    m[1] ="abc";  //O(1)
    m[5] ="pqr";
    m[3] ="xyz";
    m[5] ="cde"; 
    m.insert({4,"mno"});
    printmap(m);
}