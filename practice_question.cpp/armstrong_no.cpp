#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int org=n , sum=0 , count=0 , dig=0;

    int temp=n;
    while(temp>0){
        temp/=10;
        count++;
    }
    temp=n;
    while(temp!=0){
        dig=temp%10;
        sum=sum+pow(dig,count);
        temp/=10;
    }
    if(sum==org){
        cout<<"yes number is armstrong";
    }
    else{
        cout<<"no number is not armstrong";
    }
}