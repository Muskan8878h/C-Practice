// map is not continuous  (i+1 is invalid here )
//it store values in sorted order
// key are always unique 
#include<bits/stdc++.h>
using namespace std;
void printmap(map<int,string> m){
    cout<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){
    map<int, string> m;
    m[1] ="abc";  //O(log(n))
    m[5] ="pqr";
    m[3] ="xyz";
    m[5] ="cde"; //it updates the value of 5 that already exits bcz keys are unique in map
    m.insert({4,"mno"}); //we can declare values using both the methods 
    // map<int,string> :: iterator it;
    // for(it=m.begin();it!=m.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    // we can use auto keywork to minimize the code
    printmap(m);
}