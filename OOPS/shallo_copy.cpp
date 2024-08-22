#include<iostream>
using namespace std;
class student{

    public:
        string name;
        double cgpa;
    student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }

    //copy constructor 
    // student(student &obj){
    //     this->name = obj.name;
    //     this->cgpa = obj.cgpa;
    // }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};
int main(){
    student s1("ram",8.5);
    s1.getInfo();
    student s2(s1);
    s2.getInfo();


}