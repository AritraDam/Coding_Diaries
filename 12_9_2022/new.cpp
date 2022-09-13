#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        string y = "abcdefghijklmnopqrstuvwxyz";
        string z="";
        cin>>s;
        int j =s.length();
        for(int i=j-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                string x="";
                x+=s[i-2];
                x+=s[i-1];
                // cout<<x<<endl;
                z+=y[stoi(x)-1];
                i-=2;
            }
            else
            z+=y[(s[i]-'0')-1];
        }
        reverse(z.begin(),z.end());
        cout<<z<<endl;
    }
    return 0;
}