#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n%400==0 || n%4==0) && n%100!=0){
        cout<<n<<" is leap year"<<endl;
    }
    else{
        cout<<n<<" is not leap year"<<endl;
    }
}