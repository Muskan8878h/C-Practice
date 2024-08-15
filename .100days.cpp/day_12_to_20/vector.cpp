// dynamic in nature 
// continuous memory alloction 
#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    cout<<"size " <<v.size()<<endl;
    for(int i=0;i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x); //time complaxity of push_back is => O(1)
    }
    printvec(v);
}