#include<iostream>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int len=a.length();
    int count=0;
    int i=0,j=len-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<a;
}