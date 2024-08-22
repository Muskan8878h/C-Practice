#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){ //default constructor
        a=0;
    }
    number(int num){
        a=num;
    }
    // copy constructor 
    // when no copy constructor is found, compiler supplies its own compy constructor
    number(number &obj){
        cout<<"copy constructor called "<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"The no. for this object is "<<a<<endl;
    }
};
int main(){
    number x,y,z(86),z2;
    x.display();
    y.display(); 
    z.display();

    // number z1(x);
    number z1(z); //copy constructor invoked
    z1.display();

    // when object is already declared and we just assign value to the object than copy constructor not invoked
    z2=z; //copy constructor not called
    z2.display();

    number z3=z; //copy constructor invoked
    z3.display();
}