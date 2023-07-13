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
        vector<int> v(n,0);
        v[n-1] = n;
        v[n-2] = n-1;
        for(int i = n-3;i>=0;i-=2)
        {
            
            int j = i;
            v[i] = j;
            if(i-1>=0)
            v[i-1] = j+1;
        } 
        if(n%2!=0)
        v[0] =1;
        for(int i=1;i<=n;i++)
        cout<<v[i-1]<<" ";
        cout<<endl;
    }
    return 0;
}