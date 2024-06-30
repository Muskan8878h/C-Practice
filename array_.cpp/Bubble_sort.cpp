#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =1;
    while(count<n){
        for(int i=0;i<n-count;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    count++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// explaination - reapetedly swap two adjacent elements if they are in wrong order
//  I.step   (n-1 iteration before we get our sorted array)
// 12, 45, 23, 51, 19, 8 
// 12, 45, 23, 51, 19, 8
// 12, 23, 45, 51, 19, 8
// 12, 23, 45, 51, 19, 8
// 12, 23, 45, 19, 51, 8
// 12, 23, 45, 19,  8, 51
//  II.step     (n-2)
// 12, 23, 45, 19, 8, 51
// 12, 23, 45, 19, 8, 51
// 12, 23, 45, 19, 8, 51
// 12, 23, 19, 45, 8, 51
// 12, 23, 19,  8, 45, 51
// III.step     (n-3)
// 12, 23, 19, 8, 45, 51
// 12, 23, 19, 8, 45, 51
// 12, 19, 23, 8, 45, 51
// 12, 19,  8, 23, 45, 51
// IV.step      (n-4)
// 12, 19, 8, 23, 45, 51
// 12, 19, 8, 23, 45, 51
// 12, 8, 19, 23, 45, 51
// V.step       (n-5)
// 12, 8, 19, 23, 45, 51
// 8, 12, 19, 23, 45, 51
