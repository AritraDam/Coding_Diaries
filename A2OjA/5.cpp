#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    for(int i=n+1;i<=1e9;i++)
    {
        int a[4];
        int j=i,k=0;
        while(j>0)
        {
            a[k++] = j%10;
            j/=10;
        }
        if(a[0]!=a[1] && a[0]!=a[2] && a[0]!=a[3] && a[1]!=a[2] && a[1]!=a[3] && a[2]!=a[3])
        {cout<<i;break;}
    }
    return 0;
}