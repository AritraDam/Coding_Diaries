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
    int n;cin>>n;
    int x;
    map<int,int> m;
    rep(i,n)
    {
        cin>>x;
        m[x]=i+1;
    }
    for(auto &it:m)
    cout<<it.second<<" ";
    cout<<"\n";
    return 0;
}