#include <bits/stdc++.h>  
using namespace std;  
typedef long long int ll;
int main(){
    
    ll t;
    cin>>t;
    while(t--){
        ll n,c,q,k;
        cin>>n>>c>>q;
        
        string s;
        ll start,end;
        cin>>s;
        for(ll i=0;i<c;i++)
        {
            cin>>start>>end;
            
            s+=s.substr(start-1,end-start+1);
        }
        for(int i=0;i<q;i++){
            cin>>k;
            cout<<s[k-1]<<endl;
        }
    }
    return 0;
}