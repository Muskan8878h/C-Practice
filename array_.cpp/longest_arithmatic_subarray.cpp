#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result =2;
    int previous_common_diff=arr[1]-arr[0];
    int current_len=0;
    for(int i=0;i<n-1;i++){
        if(previous_common_diff == arr[i]-arr[i-1]){
            current_len++;
        }
        else{
            previous_common_diff = arr[i] - arr[i-1];
            current_len=2;
        }
        result= max(result,current_len);
    }
    cout<<result<<endl;
    return 0;
}