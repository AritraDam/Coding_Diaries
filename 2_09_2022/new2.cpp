#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char>> &v,int n,int i,int j,int k)
{
    if(i<0 || j<0 || i>n || j>n || v[i][j]!='.')
    return;
    else
    {
        v[i][j] ='X';
        dfs(v,n,i+k,j,k);
        dfs(v,n,i-k,j,k);
        dfs(v,n,i,j+k,k);
        dfs(v,n,i,j-k,k);
        dfs(v,n,i-1,j+1,k);
        dfs(v,n,i+1,j-1,k);
        dfs(v,n,i-k+1,j-1,k);
        dfs(v,n,i+k-1,j+1,k);
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    vector<vector<char>> v(n+1,vector<char>(n+1,'.'));
    // for(int i=x,j=y;i>=0 && j<=n;i--,j++)
    // {
    //     if(v[i][j]!='X')
    //     dfs(v,n,i,j,k);
    // }
    // for(int i=x+1,j=y-1;i<=n && j>=0;i++,j--)
    // {
    //     if(v[i][j]!='X')
    //     dfs(v,n,i,j,k);
    // }
    
    dfs(v,n,x,y,k);
    
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        cout<<v[i][j];
        cout<<endl;
    }
    }
    return 0;
}
