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
        string s;cin>>s;
        char x = *max_element(s.begin(),s.end());
        cout<<(x-'a')+1<<endl;
        
    }
    return 0;
}