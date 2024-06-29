#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n,r;
    cin>>n>>r;  //n=5 r=2
    int result = fact(n)/(fact(r)*fact(n-r));
    cout<<result;  //10
}