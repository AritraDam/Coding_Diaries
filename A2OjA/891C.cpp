#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// int binS(int n)
// {
//     n*=2;
//     int l=0,hi=n;
//     // cout<<n<<endl;
//     while(l<=hi)
//     {
//         int m=(l+hi)/2;
//         int delta = m*(m-1);
//         if(delta == n) return m;
        
        
        
//         if(m*(m-1)>(n)) hi=m-1;
//         else l=m+1;
//     }
//     return -1;
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        
        int delta = (n*(n-1))/2;
        vector<ll>v(delta);
        map<ll,int> m;
        for(auto &it: v)
        {
            cin>>it;
            m[it]++;
        }
        int x = n;
        
        
        
        vector<ll> ans(x);
        // cout<<ans.size()<<endl;
        int j=0;
        for(auto &it :m)
        {
            int d = x-j;
            while(it.second>0)
            {
                ans[j++] = it.first;
                it.second-=--d; 
            }
        }
        // cout<<j<<" "<<ans.size()<<endl;
        if(j<ans.size())
        {
            // cout<<"gg"<<endl;
            for(int i=j;i<ans.size();i++)
            {
                if(ans[i-1]==1e9)
                ans[i] = 1e9;
                else
                ans[i] = ans[i-1]+1;
            }
        }

        for(auto &it: ans)
        cout<<it<<" ";
        cout<<endl;

    }
    return 0;
}