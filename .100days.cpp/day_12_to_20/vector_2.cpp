#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    // cout<<"size : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<< " " ;
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    // vector<int> v(5);  //it print 0 0 0 0 0 bcz by default its value is zero
    // vector<int> v(5,8);  //it prints 8 8 8 8 8 
    v.push_back(2);
    v.push_back(3); 
    v.push_back(4); 
    printvec(v);
    // both push and pop have time complaxity is => O(1)
    cout<<"pop: remove the last value "<<endl;
    v.pop_back();
    printvec(v);

    // we can copy vector but we can't copy an array
    // if we change in v2 it will not reflect in v 
    cout<<"copy of vector"<<endl;
    vector<int> v2=v; //here time complixity is =>O(n) bcz here one by one elements copy  
    printvec(v2);
}