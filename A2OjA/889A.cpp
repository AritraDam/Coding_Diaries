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
        int n,count=0;cin>>n;
        vector<int> v(n);
        for(auto &x: v)
        {
            cin>>x;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i] == (i+1))
            count++;
        }
        if(count%2==0) cout<<count/2<<endl;
        else cout<<(count+1)/2<<endl;
    }
    return 0;
}