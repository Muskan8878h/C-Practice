#include<iostream>
using namespace std;
void fibonaci(int n){
    int a=0;
    int b=1;
    int c;
    for(int i=0;i<n;i++){
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }
}
int main(){
    int n;
    cin>>n;
    fibonaci(n);
}