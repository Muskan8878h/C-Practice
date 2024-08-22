#include<iostream>
using namespace std;
class bankDeposite{
    int principal;
    int years;
    float interstRate;
    float returnValue;
    public:
        bankDeposite(){} //default constructor 
        bankDeposite(int p,int y,float r);
        bankDeposite(int p, int y,int r);
        void show();
};
bankDeposite :: bankDeposite(int p,int y,float r){
    principal=p;
    years=y;
    interstRate=r;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue=returnValue *(1+interstRate);
    }
}
bankDeposite :: bankDeposite(int p,int y,int r){
    principal=p;
    years=y;
    interstRate=float(r)/100;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue=returnValue *(1+interstRate);
    }

}

void bankDeposite :: show(){
    cout<<endl<<"principal amout was "<<principal<<" return value after "<<years<<" is "<<returnValue<<endl ;
}
int main(){
    bankDeposite b1,b2,b3;
    int p,y;
    float r;
    int R;

    cout<<"Enter value of p ,y ,r"<<endl;
    cin>>p>>y>>r;
    b1=bankDeposite(p,y,r);
    b1.show();

    cout<<"Enter value of p ,y ,R"<<endl;
    cin>>p>>y>>R;
    b2=bankDeposite(p,y,R);
    b2.show();
    return 0;
}