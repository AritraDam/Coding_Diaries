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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string even,odd;
        if(k%2==0)
        {
            sort(s.begin(),s.end());
            cout<<s<<endl;
            continue;
        }
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            even.push_back(s[i-1]);
            else
            odd.push_back(s[i-1]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        for(int i=0,j=0;i<odd.size() && j<s.size();i++)
        {
            s[j] = odd[i];
            j+=2;
        }
        for(int i=0,j=1;i<even.size() && j<s.size();i++)
        {
            s[j] = even[i];
            j+=2;
        }
        cout<<s<<endl;
    }
    return 0;
}