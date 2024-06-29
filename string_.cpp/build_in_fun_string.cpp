#include<iostream>
using namespace std;
int main(){
    // string a;
    // getline(cin,a);
    string a="Hey Muskan";
    cout<<a<<endl;
//length or size of string 
    cout<<a.length()<<endl;
    cout<<a.size()<<endl;

//adding char at the end of string 
    a.push_back('a');
    cout<<a<<endl;
//removing char at the end of string
    a.pop_back();
    cout<<a<<endl;

//appending a string or char
    a.append(" !!");
    cout<<a<<endl;

// plus(+) operator
    a = a + " how are you";
    cout<<a<<endl;

// to make a string empty
    a.clear();
    cout<<a<<endl;
    cout<<a.length();

}