/*
given N strings print unique strings in lexiorraphical order
N <=10^5
|S| <=100000
*/

#include<bits/stdc++.h>
using namespace std;
void printset(set<string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
}
int main(){
    set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    printset(s);
}