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
    ll k,n,w;
    cin>>k>>n>>w;
    ll cost = k* ((w*(w+1))/2);
    if(cost<n) cout<<0;
    else cout<<cost-n;
    return 0;
}