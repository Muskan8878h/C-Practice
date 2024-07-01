#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if (n==1){
        cout<<"1"<<endl;
        return 0;
    }
    int result =0;
    int mx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            result++;
        }
        mx=max(mx,arr[i]);
    }
    cout<<result<<endl;
    return 0;
}


// output
// 8
// 1 2 0 7 2 0 2 2
// input
// 2