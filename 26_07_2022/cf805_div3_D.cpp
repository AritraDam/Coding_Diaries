#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        string s,ans="";
        cin>>s;
        ll p;
        cin>>p;
        ll sum =0;
        vector<ll> v1,x1,y1;
        // map<int, set<int>> m;
       unordered_map<ll,queue<ll>> o;
        for(ll i=0;i<s.length();i++){
            ll w = s[i];
            w-=96;
            v1.push_back(w);
            x1.push_back(w);
            o[w].push(i);
        }
        // for(auto it:o){
        //     cout<<it.first<<" ";
        //     for(auto xe:it.second)
        //     cout<<xe<<" ";
        //     cout<<endl;
        // }
        // cout<<endl;
        // cout<<o[3].front()<<endl;
        sum = accumulate(v1.begin(),v1.end(),0);
        sort(x1.begin(),x1.end(),greater<int>());
        y1.push_back(x1[0]);
        for(ll i=1;i<x1.size();i++){
            y1.push_back(x1[i]+y1[i-1]);
        }
        if(sum<=p)
        {
            cout<<s<<endl;
        }
        else if(x1[x1.size()-1]>p){
            cout<<ans<<endl;
        }
        else{
            ll diff = sum -p;
            ll pos = lower_bound(y1.begin(), y1.end(),diff)-y1.begin();
            for(ll i=0;i<=pos;i++)
            {
                // v1[find(v1.begin(), v1.end(),x1[i])-v1.begin()] = -1;
                // v1[o[x1[i]]->second[0]]=-1;
                // o[x1[i]]->second.pop();
                
                v1[o[x1[i]].front()] = -1;
                o[x1[i]].pop();
            }
            for(ll i=0;i<v1.size();i++)
            {
                if(v1[i]!=-1){
                char d = v1[i]+96;
                ans+=d;
                }
            }
            cout<<ans<<endl;
        }
        
        // for(auto it: v1)
        // cout<<it<<" ";
        // cout<<endl;
        // for(auto it: x1)
        // cout<<it<<" ";
        // cout<<endl;
        // for(auto it: y1)
        // cout<<it<<" ";
    }
	return 0;
}


