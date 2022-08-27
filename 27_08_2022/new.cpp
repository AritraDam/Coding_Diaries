#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<char,int> m;
        char v[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {cin>>v[i][j];
            if(m.find(v[i][j])==m.end())
            m[v[i][j]]=1;}
        }
        if(m.size()==4)
        cout<<3<<endl;
        else if(m.size()==3)
        cout<<2<<endl;
        else if(m.size()==2)
        cout<<1<<endl;
        else
        cout<<0<<endl;
    }   

    return 0;
}