#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int vindex=0,cindex=0;
    string vow,cons;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                vow[vindex++]=str[i];
        }
        else if(str[i]>='a' && str[i]<='z'  || str[i]>='A' && str[i]<='Z' ){
            cons[cindex++]=str[i];
        }
    }
    for(int i=0;i<vindex;i++){
        cout<<vow[i];
    }
    cout<<endl;
    for(int i=0;i<cindex;i++){
        cout<<cons[i];
    }cout<<endl;

}