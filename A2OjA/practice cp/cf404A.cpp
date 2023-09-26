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
    unordered_map<char,int> m;
    m['I'] = 20;
    m['T'] = 4;
    m['C'] = 6;
    m['O'] = 8;
    m['D'] = 12;
    int t; cin>>t;
    int ans = 0;
    while(t--)
    {
        string s;cin>>s;
        ans+=m[s[0]];
    }
    cout<<ans;
    return 0;
}