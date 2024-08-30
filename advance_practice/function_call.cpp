#include<iostream>
using namespace std;


// void m(int c, int a, int b)
// {
//         cout<<b<<" + "<<c<<" = "<<a<<endl;
// }
// int main()
// {
//         int a = 4, b = 7, c = -2;
//         m(a, b, c);
//         m(c, 3, a);
//         m(a + b, b + c, c + a);
        
// }

//======================================================

// int codequotient1(int b, int c)
// {
//           return c + 2 * b;
// }
// int main()
// {
//         int a = 4, b = 2, c = 5;
//         a = codequotient1(c, b);
//         c = codequotient1(b, a);
//         cout<<a<<endl<<b<<endl<<c;
//         return 0;
// }

//=========================================================

// void codequotient1(int a)
// {
//  cout<<a;
//  a = 16;
// }
// int main() 
// {
//  int a = 134;
//  int b = 22;
//  cout<<a;
//  codequotient1(b);
//  cout<<a;
//  cout<<b;
//  return 0;
// }

//==============================================================

// void codequotient(string y, string z, string x) 
// {
//     cout<<z<<" and "<<x<<" like "<<y<<endl;
//  }
 
// int main() 
// {
//     string x = "code";
//     string y = "quotient";
//     string z = "coding";

//     codequotient(x, y, z);
//     codequotient(z, x, y);
//     return 0;
// }

//==================================================================

// void cq1(int);
// int cq2(int,int);
// int cq3(int, int);
// void cq1(int y) {
//        int x = y / 10;
//        int z = (x + y);
//        x = cq2(z, y);
//        cout<<"cq1: x = "<<x<<", y = "<<y<<", z = "<<z<<endl;
//    }
// int cq2(int x, int y) {
//        int z = cq3(x + y, y);
//        y /= z;
//       cout<<"cq2: x = "<<x<<", y = "<<y<<", z = "<<z<<endl;
//        return z;
//    }
// int cq3(int x, int y) {
//        y = x / (x % 10);
//        cout<<"cq3: x = "<<x<<", y = "<<y<<endl;
//        return y;
// }
// int main() 
// {
//        cq1(11);
//        cq1(21);
// }
