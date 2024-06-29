#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int j;
        for(j=0;j<n-i;j++){
            cout<<" ";
        }
        int k=i;
        for(j=n-i;j<n;j++){
            cout<<k--;
        }
        for(int j=1;j<i;j++){
            cout<<j+1;
        }
        cout<<endl;
        
    }
}