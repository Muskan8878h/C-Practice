#include<iostream>
using namespace std;

class bank{
    private:   //data hiding
        double balance;
        string password;
    public:
        string accoNo;
        string username;

};
int main(){
    bank b1;
    b1.accoNo = "123456789";
    b1.username = "Rahul";
    cout<<b1.accoNo<<endl;
}