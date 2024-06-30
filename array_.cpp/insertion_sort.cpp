#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// explaination - insert an element from unsorted array to its correct position in sorted array
// 12, 45, 23, 51, 19, 8 
// 12, 45, 23, 51, 19, 8
// 12, 23, 45, 51, 19, 8
// 12, 23, 45, 51, 19, 8
// 12, 19, 23, 45, 51, 8
// 8, 12, 19, 23, 45, 51