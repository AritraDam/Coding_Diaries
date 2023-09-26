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
    set<char> w;
    rep(i,s.length())
    w.insert(s[i]);
    if(w.size()%2)
    cout<<"IGNORE HIM!";
    else
    cout<<"CHAT WITH HER!";
    return 0;
}