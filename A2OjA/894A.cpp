#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char s[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin>>s[i][j];
        }
        string S ="vika";
        int k=0,count =0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[j][i]==S[k])
                {
                    count++;
                    k++;
                    break;
                }
            }
        }
        if(count == 4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}