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
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }
    }
}

// input- 
//       5
//       1 2 0 7 2
// output-
//       1 3 3 10 12 2 2 9 11 0 7 9 7 9 2 