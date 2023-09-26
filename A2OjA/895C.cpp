#include<bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define all(o) (o).begin(), (o).end()
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
int isPrimex(ll n)
{
    if (n <= 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
 
    return 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        int flag =1;
        for(ll i =l;i<=r;i++)
        {
            if(i%2==0)
            {
                if((i/2)!=1)
                {
                    cout<<i/2<<" "<<i/2<<endl;
                    flag =0;
                    break;
                }
            }
        }
        if(flag)
        {
            if(l!=r) cout<<-1<<endl;
            else if(l==1 && r==1) cout<<-1<<endl;
            else if(isPrimex(l)) cout<<-1<<endl;
            else
            {
                ll p = 2,q = l-2;
                while(p<q)
                {
                    if(__gcd(p,q)!=1)
                    {
                        cout<<p<<" "<<q<<endl;
                        break;
                    }
                    p++;q--;
                }
            }
        }
    }
    return 0;
}