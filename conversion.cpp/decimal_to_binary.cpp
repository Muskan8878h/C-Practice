#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n){
    int result=0;
    int x=1;
    while(x<=n){
        x*=2;
    }
    x/=2;

    while(x>0){
        int lastdig=n/x;
        n-=lastdig*x;
        x/=2;
        result =result*10+lastdig;
    }
    return result;
    
}
int main(){
    int n;
    cin>>n;
    cout<<decimalToBinary(n);
}