#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void printx(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(i==0)
        {
            if(s[i]=='0')
            continue;
        }
        cout<<s[i];
    }
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while (t--)
    {
        string S;cin>>S;
        string s="0";
        s+=S;
        int j=-1;
        for(int i=s.length()-1;i>=1;i--)
        {
            if(s[i]>='5')
            {
                s[i-1]++;
                j=i;
            }
        }
        if(j==-1)
        {
            printx(s);
            continue;
        }
        for(int i=j;i<s.length();i++)
        s[i] = '0';
        printx(s);   
    }
    
    return 0;
}