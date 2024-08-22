#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    
    complex(int ,int);
    void printNumber(){
        cout<<"Your no. is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex :: complex(int x,int y) //this is parametrized constructor as it takes 2 parameters.
{
    a=x;
    b=y;
}
int main(){
    // implicit call
    complex c(4,5); 

    // explicit call
    complex b=complex(5,7);

    // complex c;
    c.printNumber();
    b.printNumber();
    return 0;
}

