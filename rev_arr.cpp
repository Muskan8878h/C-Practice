#include<iostream>
using namespace std;
int main(){
    int arr[]={3,6,5,4,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j;
    for (int i=0;i<n;i++){
        j=n-i-1;
        arr[i]=arr[j];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}