#include <bits/stdc++.h>  
using namespace std;  
typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,l,r;
        vector<ll> v;
        cin>>n>>l>>r;
        ll x=1;
        for(int i=1;i<=n;i++){
            for(ll j=l;j<=r;j++)
            {
                if(j%i==0){
                    v.push_back(j);
                    break;
                }
                
            }
        }
        if(v.size()!=n)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(auto f:v)
            cout<<f<<" ";
            cout<<endl;
        }
    }
    return 0;
}