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
    map<char,int> m;
    rep(i,s.length())
    {
        if(i%2 == 0)
        m[s[i]]++;
    }
    int j=0;
    for(auto &it: m)
    {
        for(int i=0;i<it.second;i++)
        {
            s[j] = it.first;
            j+=2;
        }
    }
    cout<<s;
    return 0;
}