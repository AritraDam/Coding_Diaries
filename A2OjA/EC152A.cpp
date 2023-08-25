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
        int b,c,h;
        cin>>b>>c>>h;
        if(b<=c+h)
            cout<<b+(b-1)<<endl;
        else if(b>c+h)
            cout<<c+h+(c+h+1)<<endl;
    }
    return 0;
}