#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        if(b!=0){
        if((n-1)*(k-1)<s-(k*b) || (k*b)>s)
        cout<<-1<<endl;
        else{
            vector<ll> v(n,0);
            v[n-1] = k*b;
            ll sum = s-v[n-1];
            for(int i=n-2;i>=0;i--)
            {
                if(sum == 0)
                break;
                if(sum>=k)
                {
                    v[i] = k-1;
                    sum-=k-1;
                }
                else
                {
                    v[i] = sum;
                    sum=0;
                }
            }
            sort(v.begin(),v.end());
            for(auto &it:v)
            cout<<it<<" ";
            cout<<endl;
        }
        }
        else{
            if(b==0 && s==0)
            {
                vector<ll> v(n,0);
                for(auto &it:v)
                cout<<it<<" ";
                cout<<endl;
            }
            else if(n*k>s && n*(k-1)>=s)
            {
            vector<ll> v(n,0);
            if(s>=k)
            v[n-1] = k-1;
            else v[n-1] = s;
            ll sum = s-v[n-1];
            for(int i=n-2;i>=0;i--)
            {
                if(sum == 0)
                break;
                if(sum>=k)
                {
                    v[i] = k-1;
                    sum-=k-1;
                }
                else
                {
                    v[i] = sum;
                    sum=0;
                }
            }
            sort(v.begin(),v.end());
            for(auto &it:v)
            cout<<it<<" ";
            cout<<endl;
            }
            else
            cout<<-1<<endl;
        }
    }
}