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
        vector<int> v(3);
        for(auto &x:v)
        {
            cin>>x;
        }
        sort(v.begin(),v.end());
        cout<<v[1]<<endl;
    }
    return 0;
}