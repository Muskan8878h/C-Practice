#include<iostream>
using namespace std;
//pass by value 
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"in function "<<a<<" "<<b<<endl;;
}
int main(){
    int a=2;
    int b=3;
    swap(a,b);
    cout<<"in main "<<a<<" "<<b<<endl; 
}