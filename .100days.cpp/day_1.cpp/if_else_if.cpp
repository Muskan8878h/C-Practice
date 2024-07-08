        #include<iostream>
using namespace std;
int main(){
    int marks;
    cin >>marks;
    if(marks<25){
        cout <<"F Grade";
    }
    else if(marks>=25 && marks <=44){
        cout <<"E Grade";
    }
    else if(marks>=45 && marks <=49){
        cout <<"D Grade";
    }
    else if(marks>=50 && marks <=59){
        cout <<"C Grade";
    }
    else if(marks>=60 && marks <=79){
        cout <<"B Grade";
    }
    else if(marks>=80 && marks <=100){
        cout <<"A Grade";
    }
}

