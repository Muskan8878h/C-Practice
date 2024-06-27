#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,9,8,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx=arr[0];
    for(int i=0;i<n;i++){
        if (mx<arr[i]){
            mx=arr[i];
        }        
    }
    int scnd_max=arr[0];
    for(int i=0;i<n;i++){
        if(mx>arr[i] && scnd_max<arr[i]){
            scnd_max=arr[i];
        }
    }
    cout<<scnd_max;
}