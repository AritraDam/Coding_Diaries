#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<ll> v(n);
        ll largest=-1,secondl=-1;
        for(auto &x: v)
        {
            cin>>x;
            if(x>largest)
            {
                secondl = largest;
                largest = x;
            }
            else
            secondl = max(secondl,x);
        }
        for(auto &x: v)
        {
            if(x == largest)
            x-=secondl;
            else
            x-=largest;
        }
        for(auto &x:v)
        cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}