#include<iostream>
#include<string>
using namespace std;
class teacher{
    //propertices
// private:
public:
    string name;
    string dept;
    string subject;
    double salary;

    //methods or member function 
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    teacher t1;
    t1.name = "Ram";
    t1.subject = "c++";
    t1.dept = "computer science";
    t1.salary = 10000;
    cout<<t1.name<<endl<<t1.dept<<endl<<t1.subject<<endl<<t1.salary<<endl;

    return 0;
}