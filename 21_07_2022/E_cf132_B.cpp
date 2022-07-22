#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    int n,m;
    cin>>n>>m;
    ll w;
    vector<ll> v,forward;
    vector<ll> backward(n,0);
    for(int i=0;i<n;i++){
        cin>>w;
        v.push_back(w);
    }
    ll e=0;
    forward.push_back(0);
    for(int i=0;i<n-1;i++)
    {
        if(v[i]<v[i+1]){
            e+=0;
            forward.push_back(e);
        }
        else
        {
            e+=v[i]-v[i+1];
            forward.push_back(e);
        }
    }
    
    
    e=0;
    for(int i=n-1;i>0;i--){
        if(v[i]<v[i-1])
        {
            e+=0;
            backward[i-1] = e;
        }
        else
        {
            e+=v[i]-v[i-1];
            backward[i-1] = e;
        }
        // cout<<e<<endl;
    }
        // for(int i=0;i<n;i++){
        //     cout<<forward[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<backward[i]<<" ";
        // }
        // cout<<endl;
        // // 2 2 5 5 5 10 
        // // 7 7 6 6 4 0 
        for(int i=0;i<m;i++){
            ll x,y;
            cin>>x>>y;
            if(x<y){
                cout<<forward[y-1] - forward[x-1]<<endl;
            }
            else{
                cout<<backward[y-1] - backward[x-1]<<endl;
            }
        }
	return 0;
}


