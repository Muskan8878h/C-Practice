#include<iostream>
using namespace std;

class bank{
    private:  
        double balance;
        string password;
    public:
        string accoNo;
        string username;
        string bank_name;

        //non parametrized constructor
        // bank(){
        //     cout<<"hey!Welcome to SBI bank"<<endl;
        //     bank_name = "SBI";//initialsise the construction 
        // }

        //parametrized constructor
        // bank(string a, string u, string b){
        //     accoNo=a;
        //     username=u;
        //     bank_name=b;
        // }
        
        // this (it is used if we want to give full name of parameters )
        bank(string accoNo, string username, string bank_name){
            // but complier get confused bcz both of same values 
            // accoNo=accoNo;
            // username=username;
            // bank_name=bank_name;
            // so we use this keyword 
            this->accoNo=accoNo;
            this->username=username;
            this->bank_name=bank_name;
        }
        

        void getInfo(){
            cout<<"accoNo. "<<accoNo<<endl;
            cout<<"username "<<username<<endl;
            cout<<"bank_name "<<bank_name<<endl;
        }

};
int main(){
    // non parametrized
    // bank b1; //constructor call
    // b1.accoNo = "76447";
    // b1.username = "Rahul"; 
    // cout<<b1.accoNo<<endl<<b1.username<<endl;

    // parametrized
    bank b1("76447","ram","SBI");
    b1.getInfo();
    
}