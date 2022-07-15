#include <bits/stdc++.h>  
using namespace std;  
typedef long long int ll;
int main(){
    
    ll t;
    cin>>t;
    while(t--){
        ll n,w,countZ=0,sum=0,flag=0;
        cin>>n;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            cin>>w;
            v.push_back(w);
        }
        for(ll i=0;i<n-1;i++){
            if(v[i]!=0)
            flag=1;
            if(flag==1){
                if(v[i]==0)
                countZ++;
                else
                sum+=v[i];
            }
        }
        if(sum!=0)
        cout<<sum+countZ<<endl;
        else
        cout<<0<<endl;
    }
    return 0;
}