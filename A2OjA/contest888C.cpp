#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n,k,w;
        unordered_map<int,int> m;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>w;
            v.push_back(w);
            m[w]++;
        }
        int b2  = m[v[n-1]];
        int b1  = m[v[0]];
        if(b1<k || b2<k)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(v[n-1] == v[0])
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            int count1=k,count2=k;
            vector<int> check;
            for(int i = 0;i<n;i++)
            {
                if(v[i]==v[0] && count1>0)
                {
                    check.push_back(v[i]);
                    count1--;
                }
                else if(v[i]==v[n-1] && count1<=0 && count2>0)
                {
                    check.push_back(v[i]);
                    count2--;
                }
            }
            // for(auto &it: check)
            // cout<<it<<" ";
            // cout<<endl;
            if(check.size()%k!=0)
            cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }

    return 0;
}