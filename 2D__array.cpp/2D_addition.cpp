#include<iostream>
using namespace std;
int main(){
    int arr_a[2][2];
    int arr_b[2][2];
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cin>>arr_a[i][j];
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cin>>arr_b[i][j];
        }
    }
    cout<<endl;
    int arr_c[2][2];
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            arr_c[i][j]=arr_a[i][j] + arr_b[i][j];
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<arr_c[i][j];
        }cout<<endl;
    }
}