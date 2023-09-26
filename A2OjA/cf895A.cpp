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
        int a,b,c;
        cin>>a>>b>>c;
        float x = (float) (a+b)/2;
        // cout<<x<<"##"<<endl;
        if(a == b)
        cout<<0<<endl;
        else if(x < c)
        cout<<1<<endl;
        else
        {
            x = ceil(abs(b-x));
            cout<<ceil((float)x/c)<<endl;
        }
    }
    return 0;
}