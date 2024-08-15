#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int N;
    //vector you want to create
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++){
        int n;
        //elements in a vector
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            // enter value 
            cin>>x;
            v[i].push_back(x);
        }
    }
    cout<<"ARRAY OF VECTOR is: "<<endl;
    for(int i=0;i<N;i++){
        printvec(v[i]);
    }
}