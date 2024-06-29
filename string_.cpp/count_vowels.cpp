#include<iostream>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int len=a.length();
    int count=0;
    for(int i=0;i<len;i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O'||a[i]=='U' ){
            count++;
        }
    }
    cout<<a<<endl<<count;
}