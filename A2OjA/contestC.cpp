#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[8][8];
        string s ="";
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
                if(a[i][j]!='.')
                s+=a[i][j];
            }
        }
        cout<<s<<endl;
    }
    return 0;
}