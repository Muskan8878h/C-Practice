#include<iostream>
using namespace std;

class bank{
    private:  
        double balance;
        string password;
    public:
        bank(){
            cout<<"hey!Welcome to SBI bank"<<endl;
            bank_name = "SBI";//initialsise the construction 
        }
        string accoNo;
        string username;
        string bank_name;

};
int main(){
    bank b1; //constructor call
    b1.accoNo = "76447";
    b1.username = "Rahul";
    cout<<b1.bank_name<<endl;
    cout<<b1.accoNo<<endl<<b1.username<<endl;
}