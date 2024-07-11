#include <bits/stdc++.h> 
using namespace std;
int countDigit(long long x) {
    // Write your code here.
    long long count=0;
    while(x>0){
        x=x/10;
        count++;
    }
    cout<<count<<endl;
}
int main(){
    long long x;
    cin>>x;
    countDigit(x);
}