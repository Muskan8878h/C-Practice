#include<bits/stdc++.h>
using namespace std;
int main(){
    map<pair<int,int>,int> m_p;
    pair<int,int> p1,p2;
    p1={1,2};
    p2={2,3};
    cout<<"map pair : "<<(p1<p2)<<endl;

    map<set<int>,int> m_s;
    set<int> s1={1,2,3};
    set<int> s2={2,3};
    cout<<"map set : "<<(s1<s2)<<endl;

    map<pair<string,string>,vector<int>> m_p_v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string fn,ln;
        int ct;
        cin>>fn,ln,ct;
        for(int j=0;j<ct;j++){
            int x;
            cin>>x;
            m_p_v[{fn,ln}].push_back(x);
        }
    }
    for(auto &pr:m_p_v){
        auto &full_name=pr.first;
        auto &list=pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<<list.size()<<endl;
        for(auto &element: list){
            cout<<element<<" ";
        }
        cout<<endl;
    }
}