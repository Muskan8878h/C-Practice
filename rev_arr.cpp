#include<iostream>
using namespace std;
int main(){
    int arr_one[]={3,6,5,4,7,8};
    int n=sizeof(arr_one)/sizeof(arr_one[0]);
    int j;
    int arr_two[n];
    for (int i=0;i<n;i++){
        j=n-i-1;
        arr_two[i]=arr_one[j];
    }
    for(int i=0;i<n;i++){
        cout<<arr_two[i];
    }
}