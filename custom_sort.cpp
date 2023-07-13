#include<bits/stdc++.h>
using namespace std;

bool com(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    else return a.first<b.first;
}


int main(){
    vector<pair<int,int>> v;
    v.push_back(make_pair(1,1));
    v.push_back(make_pair(0,2));
    v.push_back(make_pair(0,4));
    v.push_back(make_pair(2,3));


    sort(v.begin(),v.end(),com);
    for(auto i :v){
        cout<<i.first<<" "<<i.second<<endl;
    }
}