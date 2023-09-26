#include<bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define all(o) (o).begin(), (o).end()
using namespace std;
typedef long long int ll;
typedef vector<int> vi;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    int ans=0;
    vi v(n);
    rep(i,n)
    cin>>v[i];
    int Max = *max_element(all(v));
    int Min = *min_element(all(v));
    int indexMax,indexMin;
    rep(i,n)
    {
        if(v[i]==Max)
        {indexMax=i;break;}
    }
    ans+=indexMax;
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]==Min)
        {indexMin=i;break;}
    }
    if(indexMin<indexMax)
    {
        indexMin++;
    }
    ans+=n-1-indexMin;
    cout<<ans<<endl;
    return 0;
}