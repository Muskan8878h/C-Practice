#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int arr1[n1][n2];
    int arr2[n2][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>arr2[i][j];
        }
    }
    int array[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            array[i][j]=0;
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                array[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<array[i][j]<<" ";
        }cout<<endl;
    }
    
}


// output
// 3 4 3 
// 2 4 1 2
// 8 4 3 6
// 1 7 5 9
// 1 2 3
// 4 5 6
// 7 8 9
// 4 5 6
// input 
// 33 42 51
// 69 90 111
// 100 122 144