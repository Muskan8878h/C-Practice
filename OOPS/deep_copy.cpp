#include<iostream>
using namespace std;
class student{

    public:
        string name;
        double* cgpaptr;
    student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    //copy constructor 
    student(student &obj){
        this->name = obj.name;
        this->cgpaptr = obj.cgpaptr;
    }
    void getInfo(){ 
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaptr<<endl;
    }
};
int main(){
    student s1("ram",8.5);
    student s2(s1);
    s2.getInfo();
    *s2.cgpaptr = 9.5;
    s2.getInfo();


}