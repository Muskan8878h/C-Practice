#include<iostream>
using namespace std;
int main(){
    string a;

    getline(cin,a);
    int len = a.length();
    cout<<a<<endl;
    int i=0;
    int j=(len/2)-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<a;
    
}