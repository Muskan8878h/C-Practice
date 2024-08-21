#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    // creating constructor 
    // constructor is a special member function with same name as of class 
    // it is used to initialize the objects of its class
    // it is automatically invoked  whenever an object is created
    
    complex(void);
    void printNumber(){
        cout<<"Your no. is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex :: complex(void) //this is default constructor as it takes no parameters.
{
    a=10;
    b=0;
}
int main(){
    complex c;
    c.printNumber();
    return 0;
}


// characterstics of constructor 
// it should be decalared in public section of the class
// they are automatically inc=voked whenever the object is created
// they cannot return value and do not have return types
// it can have default arguments
// we cannot refer to their address 