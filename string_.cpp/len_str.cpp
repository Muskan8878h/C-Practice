#include<iostream>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    cout<<a<<endl;
    int len=a.length();
        // we use both length as well as size
    int leng=a.size();

    cout<<leng<<endl;
    cout<<len<<endl;
    
}