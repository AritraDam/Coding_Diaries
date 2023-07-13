#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a>1)
        cout<<a-1<<endl;
        else{
            if(b>2)
            cout<<2<<endl;
            else
            cout<<3<<endl;
        }
    }
    return 0;
}