#include<iostream>
using namespace std;
class student {
    public:
        string name;
        double* cgpaptr;
    student (string name ,double cgpa){
        this->name=name;
        cgpaptr=new double;
        *cgpaptr=cgpa;
    }
    // destructor
    ~student(){
        cout<<"hi,i delete everything"<<endl;
    }


    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgpaptr<<endl;
    }
};
int main(){
    student s1("ram",8.9);
    s1.getInfo();
    return 0;
}