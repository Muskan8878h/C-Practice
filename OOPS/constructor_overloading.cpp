// Constructor overloading can be defined as having multiple constructors with different parameters so that every constructor can perform a different task
#include<iostream>
using namespace std;
class complex {
    int a,b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(int x,int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }

    void displaypoint(){
        cout<<"the number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

int main(){
    complex p(3,1);
    p.displaypoint();
    complex p1(5);
    p1.displaypoint();
    complex p3;
    p3.displaypoint();
}