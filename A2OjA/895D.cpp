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
    int t;cin>>t;
    while(t--){
    ll n,x,y;
    cin>>n>>x>>y;   
    ll sum=0;
    ll a,b;
    a = n/x;
    b = n/y;
    
    // cout<<a<<" "<<b<<"\n";
    ll lcm = (x*y)/__gcd(x,y);
    // cout<<lcm<<"\n";
    ll m=0;
    m = n/lcm;
    a-=m;
    b-=m;
    // cout<<a<<" "<<b<<"##\n";
    
    sum+=(a*(2*n + (a-1)*(-1)))/2;
    
    // cout<<sum<<endl;
    sum-=(b*(2*1 + (b-1)))/2;
    cout<<sum<<endl;
    }
    return 0;
}