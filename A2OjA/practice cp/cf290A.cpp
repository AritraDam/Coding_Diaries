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
    int n,m;
    cin>>n>>m;
    vector<string> ans;
    string s1(m,'.'),s2(m,'#');
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        ans.push_back(s2);
        else
        ans.push_back(s1);
    }
    int p=0;
    for(int i=1;i<n;i+=2)
    {
        if(!p)
        {
            ans[i][m-1] = '#';
            p=1;
        }
        else{
            ans[i][0] = '#';
            p=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<"\n";
    }
    return 0;
}