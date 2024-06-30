#include<iostream>
using namespace std;
bool check(int a,int b, int c){
    if(a*a==b*b+c*c){
        return true;
    }
    else if (b*b==a*a+c*c){
        return true;
    }
    else if (c*c==a*a+b*b){
        return true;
    }
    else {
        return false;
    }

}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(check(a,b,c)){
        cout<<"YES pythagorial triplet"<<endl;
    }
    else{
        cout<<"NOt a pythagorial triplet"<<endl;
    }
}