#include<iostream>
using namespace std;
class person{
    public:
        string name;
        int age;
    person(){
        cout<<"parent constructor"<<endl;
    }
   
};
// in constructor firstly parent class conbstructor call and than inharitance class constroctor called.
// in destructor firstly deallocate the chil class memory nd then parent class memory.
// inheritance
class student:public person{
    public:
    int  rollno;
    // constructor
    student(){
        cout<<"child constructor"<<endl;
    }

    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"rollno:"<<rollno<<endl;
    }
     
    
};
int main(){
    student s1;
    s1.name="ram";
    s1.age=21;
    s1.rollno=1234;
    s1.getInfo();
    return 0;
}