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
    string s;cin>>s;
    int flag =0;
    rep(i,5)
    {
        string s1;cin>>s1;
        if(s1[0]==s[0] || s1[1]==s[1])
        flag =1;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}