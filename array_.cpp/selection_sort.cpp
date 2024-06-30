#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//eplaination - find the minimum element in unsorted array and swap it with element at the begning 
// 12, 45, 23, 51, 19, 8
// 8, 45, 23, 51, 19, 12
// 8, 12, 23, 51, 19, 45
// 8, 12, 19, 23, 51,45
// 8, 12, 19, 23, 45, 51