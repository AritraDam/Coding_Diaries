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
    while(t--)
    {
        int x;cin>>x;
        int ans =0;
        int n = x%10;
        int count = floor(log10(x)+1);
        ans = 10*(n-1);
        while(count)
        {
            ans+=count;
            count--;
        }
        cout<<ans<<"\n";   
    }
    return 0;
}