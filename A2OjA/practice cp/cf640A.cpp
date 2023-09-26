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
        int n; cin>>n;
        int count = floor(log10(n) + 1);
        // cout<<count<<endl;
        if((n%(int)pow(10,count-1))==0)
        {
            cout<<1<<"\n"<<n<<"\n";
            continue;
        }
        vi v;
        int j =1;
        while(n>0)
        {
            int i = n%10;
            n/=10;
            if(i!=0)
            v.push_back(i*j);
            j*=10;
        }
        cout<<v.size()<<"\n";
        rep(i,v.size())
        cout<<v[i]<<" ";
        cout<<"\n";

    }
    return 0;
}