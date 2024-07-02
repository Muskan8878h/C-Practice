#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    cout<<*arr<<endl;
    int *ptr=arr;
    for(int i=0;i<3;i++){
        // cout<<*ptr<<endl; 
        cout<<*(arr+i)<<endl; //we can print array with both the methods
        // ptr++;
    }
}