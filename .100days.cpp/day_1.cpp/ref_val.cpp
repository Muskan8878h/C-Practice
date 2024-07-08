#include<bits/stdc++.h>
using namespace std;
// pass by refrence...
void func(int &num){
    cout<<"in fun"<<endl;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num=10;
    func(num);
    cout<<"in main \n"<<num<<endl;
}



















// #include<bits/stdc++.h>
// using namespace std;
// // pass by value...
// void func(int num){
//     cout<<"in fun"<<endl;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }
// int main(){
//     int num=10;
//     func(num);
//     cout<<"in main \n"<<num<<endl;
// }