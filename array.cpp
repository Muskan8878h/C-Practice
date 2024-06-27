#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
     cout<<sizeof(arr)/4<<"size"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<sum<<"sum"<<endl;

   
}