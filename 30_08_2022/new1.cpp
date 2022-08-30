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
        bool flag = true;
        char v[2][n];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>v[i][j];
            }
        }
        
        for(int i=0;i<n;i++){
            if(v[0][i]=='G') v[0][i]='B';
            if(v[1][i]=='G') v[1][i]='B';
        }
        for(int i=0;i<n;i++)
        {
            if(v[0][i]!=v[1][i])
            {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}