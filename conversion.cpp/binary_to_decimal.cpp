#include<iostream>
using namespace std;
int binaryToDecimal(int n){
    int result=0;
    int x=1;
    while(n>0){
        int y=n%10;
        result+=y*x;
        x*=2;
        n/=10;
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n);
}