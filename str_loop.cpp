#include<iostream>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int len=a.length();
    for(int i=0;i<len;i++){
        cout<<a[i];
    }
}