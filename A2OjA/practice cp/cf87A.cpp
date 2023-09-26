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
    int tramp = 0;
    int ans = 0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        tramp-=a;
        tramp+=b;
        ans = max(ans,tramp);
    }
    cout<<ans;
    return 0;
}