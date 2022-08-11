#include<bits/stdc++.h>
using namespace std;
string PrintLCS(string x,string y,int n,int m)
{   string f="";
    int t[n+1][m+1];
    for(int i=0;i<=n;i++)
    t[i][0]=0;
    for(int i=0;i<=m;i++)
    t[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
        {
            if(x[i-1]==y[j-1])
            t[i][j] = 1+t[i-1][j-1];
            else
            t[i][j] = max(t[i-1][j],t[i][j-1]);
        }
    }
    int i=n,j=m;
    while(i>0 && j>0)
    {
        if(x[i-1]==y[j-1])
        {
            f+=x[i-1];
            i--;
            j--;
        }
        else{
            if(t[i-1][j]>t[i][j-1])
            i--;
            else
            j--;
        }
    }
    cout<<"Longest Common Subsequence Length: "<<t[n][m]<<endl;
    reverse(f.begin(),f.end());
    return f;
}
int main(){
   string x,y;
   cin>>x>>y;
   cout<<PrintLCS(x,y,x.length(),y.length());
   return 0; 
}