#include<iostream>
using namespace std;
int sum(int n){
    int result=0;
    for(int i=1;i<=n;i++){
        result+=i;
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);

}