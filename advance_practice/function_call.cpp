#include<iostream>
using namespace std;
void m(int c, int a, int b)
{
        cout<<b<<" + "<<c<<" = "<<a<<endl;
}
int main()
{
        int a = 4, b = 7, c = -2;
        m(a, b, c);
        m(c, 3, a);
        m(a + b, b + c, c + a);
        
}
