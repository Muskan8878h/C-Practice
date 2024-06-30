#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int hexadecimalToDecimal(string n){
    int result=0;
    int base=1;
    int len=n.length();
    for(int i=len-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            result+=((n[i]-'0')*base);
        }
        else if(n[i]>='A' && n[i]<='F'){
            result+=((n[i]-'A'+10)*base);
        }
        base*=16;
    }
    return result;
}
int main(){
    string n;
    cin>>n;
    cout<<hexadecimalToDecimal(n);
}