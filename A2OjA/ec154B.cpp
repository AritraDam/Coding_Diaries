#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string forZero(string s)
{
    int flag =0;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            flag = 1;
        }
        if(flag)
        s[i]='0';
    }
    return s;
}
string forOne(string s)
{
    int flag =0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            flag = 1;
        }
        if(flag)
        s[i]='1';
    }
    return s;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(forZero(a) == forZero(b))
        cout<<"YES"<<endl;
        else if(forOne(a) == forOne(b))
        cout<<"YES"<<endl;
        else if(forZero(a) == forOne(b))
        cout<<"YES"<<endl;
        else if(forOne(a) == forZero(b))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}