#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x,w;
        cin>>n>>x;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            cin>>w;
            v.push_back(w);    
        }
        ll rangef,rangel;
        rangef = v[0]-x;
        rangel = v[0]+x;
        ll count =0;
        for(ll i =1;i<v.size();i++){
            ll nf = v[i] - x;
            ll nl = v[i] + x;
            // cout<<rangef<<" "<<rangel<<" "<<nf<<" "<<nl<<endl;
            if(rangef>=nf &&rangef<=nl){
               if(rangel>=nf && rangel<=nl){
                   rangel = rangel;
               }
               else
               rangel=nl;
               
               rangef = rangef;
            }
            else if(nf>=rangef && nf<=rangel)
            {
                if(nl>=rangef && nl <=rangel){
                    rangel = nl;
                }
                rangef = nf;
            }
            else{
                rangef = nf;
                rangel = nl;
                count++;
            }
        }   
        cout<<count<<endl;
    }
    return 0;
}