#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int j=n-i;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        for(int j=1;j<=n;j++){
            if(i>j){
                cout<<"  ";
            }
            else{
                cout<<"*";
            }
        }cout<<endl;
    }
}  
