#include<iostream>
#include<string>
using namespace std;
class teacher{
    //propertices
private:
    double salary;
public:
    string name;
    string dept;
    string subject;
    

    //methods or member function 
    void changeDept(string newDept){
        dept = newDept;
    }

// we get the access of salary for some cases using function 
    // setter is used to set the value of private members
    void setSalary(double s){
        salary = s;
    }
    // getter is used to get the value of private members
    double getSalary(){
        return salary;
    }
};

int main(){
    teacher t1;
    t1.name = "Ram";
    t1.subject = "c++";
    t1.dept = "computer science";
    // t1.salary = 10000;  //it will through error

    t1.setSalary(25000);
    cout<<t1.name<<endl<<t1.dept<<endl<<t1.subject<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;
}