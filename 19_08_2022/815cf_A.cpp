#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll gcd1 = __gcd(a,b),gcd2 = __gcd(c,d);
        if(gcd1!=0)
        {
            a=a/gcd1;
            b=b/gcd1;
        }
        else
        {
            a=0;b=0;
        }
        if(gcd2!=0)
        {
            c=c/gcd2;
            d=d/gcd2;
        }
        else
        {
            c=0;d=0;
        }
        // cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<gcd1<<" "<<gcd2<<endl;
        if(a*d == b*c)
        cout<<0<<endl;
        else{
             if(a*d ==0 || c*b==0)
             cout<<1<<endl;
            else if((a*d)%(c*b)==0 || (c*b)%(a*d)==0)
            cout<<1<<endl;
            else
            cout<<2<<endl;
        }
    }
    return 0;
}