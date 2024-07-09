#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<char(j+65-1)<<" ";
        }
        for(int j=1;j<i;j++){
            cout<<char(65+i-j-1)<<" ";
        }
        cout<<endl;
    }
}
