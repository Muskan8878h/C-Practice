#include <iostream>
using namespace std;
void printArr(int res[], int n) {
   for (int i=0; i<n;i++) {
      cout<<res[i] << " ";
   }
}
void reverseArr(int arr[], int n) {
   int res[n];
   for (int i=n-1;i>=0;i--) {
      res[n-i-1]=arr[i];
   }
   printArr(res,n);
}
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
        cin>>arr[i];
   }
   reverseArr(arr, n);
   return 0;
}