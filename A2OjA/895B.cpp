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
        int n;cin>>n;
        int x  = INT_MAX;
        while(n--)
        {
            int d,s;
            cin>>d>>s;
            int f =0;
            if(s%2==0)s--;
            for(int i=3;i<=s;i+=2)
            f++;
            x = min(x,d+f);
        }
        cout<<x<<endl;
    }
    return 0;
}