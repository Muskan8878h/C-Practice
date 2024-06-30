#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int decimalToOctal(int n){
    int result=0;
    int x=1;
    while(x<=n){
        x*=8;
    }
    x/=8;

    while(x>0){
        int lastdig=n/x;
        n-=lastdig*x;
        x/=8;
        result =result*10+lastdig;
    }
    return result;
    
}
int main(){
    int n;
    cin>>n;
    cout<<decimalToOctal(n);
}