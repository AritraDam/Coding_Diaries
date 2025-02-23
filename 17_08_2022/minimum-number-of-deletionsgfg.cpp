//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends

int lcs(string x,string y,int n,int m)
{
    int t[n+1][m+1];
    for(int i=0;i<=n;i++)
    t[i][0]=0;
    for(int i=0;i<=m;i++)
    t[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[i-1]==y[j-1])
            t[i][j]=1+t[i-1][j-1];
            else
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    return t[n][m];
}
int minDeletions(string str, int n) {
    string x = str;
    reverse(str.begin(),str.end());
    string y = str;
    return n-lcs(x,y,n,n);
} 