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
    int mn=arr[0];
    for(int i=0;i<5;i++){
        if (arr[i]<mn){
            mn=arr[i];
        }
        // mn=min(mn,arr[i]);      // ...............using inbuilt fun min 
    }
    cout<<"minimum number"<<mn;
}