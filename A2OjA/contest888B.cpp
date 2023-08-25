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
        int n,w,flag =1;
        cin>>n;
        vector<int> v,x;
        for(int i=0;i<n;i++)
        {
            cin>>w;
            v.push_back(w);
        }
        x= v;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(x[i]%2==0 && v[i]%2==0 || x[i]%2!=0 && v[i]%2!=0)
            {

            }
            else
            {
                flag =0;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}