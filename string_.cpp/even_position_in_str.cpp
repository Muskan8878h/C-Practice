#include<iostream>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int len=a.length();
    int count=0;
    for(int i=0;i<len;i=i+2){
        a[i]='a';
    }
    cout<<a;
}