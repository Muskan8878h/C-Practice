#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string decimalTohexadecimal(int n){
    string result="";
    int x=1;
    while(x<=n){
        x*=16;
    }
    x/=16;

    while(x>0){
        int lastdig=n/x;
        n-=lastdig*x;
        x/=16;
        if(lastdig<=9){
            result+=to_string(lastdig);
        }
        else{
            char c ='A' + lastdig - 10;
            result.push_back(c);
        }
    }
    return result;
    
}
int main(){
    int n;
    cin>>n;
    cout<<decimalTohexadecimal(n);
}