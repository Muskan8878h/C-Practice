#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;
    int mx=arr[0];
    for(int i=0;i<5;i++){
        if (arr[i]>mx){
            mx=arr[i];
        }
        // mx=max(mx,arr[i]);      // ...............using inbuilt fun max 
    }
    cout<<"maximum number"<<mx;
}