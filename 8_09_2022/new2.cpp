#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<string,int> m,x;
        ll n,w;
        cin>>n;
        vector<string> a,b;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>w;
            a.push_back(to_string(w));
        }
        for(int i=0;i<n;i++)
        {
            cin>>w;
            b.push_back(to_string(w));
        }
        // for(auto &it:a)
        // cout<<it<<"*";
        // cout<<endl;
        for(int i=0;i<n;i++)
        {
            if(a[i].length()>1){
            a[i] = to_string(a[i].length());
            ans++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(b[i].length()>1){
            b[i] = to_string(b[i].length());
            ans++;
            }            
        }
        //   sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // for(auto &it:a)
        // cout<<it<<"*";
        // cout<<endl;
        // for(auto &it:b)
        // cout<<it<<"*";
        // cout<<endl;
        // cout<<ans<<endl;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
            x[b[i]]++;
        }
        for(auto &it:m)
        {
            if(x.find(it.first)!=x.end())
            {
                if(x[it.first]==it.second)
                {
                    x[it.first] = -1;
                    it.second = -1;
                }
                else if(x[it.first]>it.second)
                {
                    x[it.first]-=it.second;
                    it.second = -1;
                }
                else
                {
                    it.second-=x[it.first];
                    x[it.first] = -1;
                }
            }
        }
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // for(auto &it:b)
        // cout<<it<<" ";
        // cout<<endl;
        for(auto &it:m)
        {
            if(it.first!="1" && it.second!=-1)
            ans+=it.second;
        }
        for(auto &it:x)
        {
            if(it.first!="1" && it.second!=-1)
            ans+=it.second;
        }
        cout<<ans<<endl;
    }
    return 0;
}