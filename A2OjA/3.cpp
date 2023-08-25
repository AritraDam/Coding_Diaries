#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    char x;
    cin>>n>>t;
    string s ="";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s+=x;
    }
    while(t--){
        int j =0;
        for(int i=1;i<n;)
        {
            if(s[j]<s[i])
            {
                s[j] = 'G';
                s[i] = 'B';
                j+=2;
                i+=2;
            }
            else
            {
                j++;
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}