#include<bits/stdc++.h>
using namespace std; 
int main(){
    pair<int,string> p;
    // p=make_pair(2,"abc");
    // we can declare the pair in two ways 
    p={2,"abc"}; 
    cout<<"withoud updation : "<<p.first<<" "<<p.second<<endl;
    pair<int,string> &p1=p;  //if we use & it referes to the address of p  else it just copy the value of p in p1
    p1.first=3;
    cout<<"using referance : "<<p.first<<" "<<p.second<<endl;

    // if we want to swap the values in array
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={3,4};
    p_array[2]={5,6};
    cout<<"before swapping : "<<endl;
    for(int i=0;i<3;i++){
        cout<<p_array[i].first << " "<<p_array[i].second<< endl; 
    }
    // swapping
    swap(p_array[0],p_array[2]);
    cout<<"after swapping : "<<endl;
    for(int i=0;i<3;i++){
        cout<<p_array[i].first << " "<<p_array[i].second<< endl; 
    }

}