#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
    vector<int> v = {13,23,31,41,53,67,71,83,97};
    string s;
    cin>>s;
    cout<<v[s[0]-'1']<<endl;
    }
    return 0;
}