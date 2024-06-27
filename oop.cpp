#include<iostream>
using namespace std;
class calculate{
    public:
        int  num1=10;
        int num2=20;
        int addition(){
            int result= num1+num2;
            cout << result << endl;
        }
};
int main(){
    calculate add;
    add.addition();
    return 0;
}