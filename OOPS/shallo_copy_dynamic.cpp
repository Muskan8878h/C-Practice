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
    student s1("ram",8.5); //ram
    student s2(s1);  //sita
    s1.getInfo();  
    *s2.cgpaptr = 9.5;
    s1.getInfo();
    //we change cgpa of s2 but when we print after changing the cgpa then it give wrong answer


}