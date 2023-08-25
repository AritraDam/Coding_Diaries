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
        int n,m;
        cin>>n>>m;
        int arr[m][2];
        string s;
        cin>>s;
        map<string,int> M;
        for(int i=0;i<m;i++)
        {
            int a,b;
            string x = s;

            cin>>a>>b;
            sort(x.begin()+a-1,x.begin()+b);
            // cout<<x<<endl;
            M[x]++;
        }
        cout<<M.size()<<endl;
    }
    return 0;
}