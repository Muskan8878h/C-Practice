#include<iostream>
using namespace std;
class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n==1) return 0;
        if(arr[0]==0) return -1;
        int range=arr[0];
        int step=arr[0];
        int jump=1;
        for(int i=1;i<n;i++){
            if(i==n-1) 
            return jump;
            range = max(range,i+arr[i]);
            step--;
            if(step==0){
                jump++;
                if(range<=i) 
                return -1;
                step=range-i;
            }
            
        }
        return -1;
    }
};
int main(){
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution obj;
    int min_jumps = obj.minJumps(arr, n);

    if (min_jumps == -1) {
        cout << "Cannot reach the end" << endl;
    } else {
        cout << "Minimum number of jumps to reach the end: " << min_jumps << endl;
    }

    return 0;
}