#include<iostream>
using namespace std;
// destructor never takes an arguments nor does it return an value 
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for the object number"<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when destructor is called for the object number"<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are inside our main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl; 
    }
    cout<<"back to main"<<endl;
    return 0;
}