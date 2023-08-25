#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,sum =0,w,ans=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>w;
        v.push_back(w);
        sum+=w;
    }
    for(int i=1;i<=5;i++)
    {
        if((sum+i)%(n+1)==1)
        ans++;
    }
    cout<<5-ans;
    return 0;
}