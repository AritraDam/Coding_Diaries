#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    int a[n][2],ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        int right = 0,left = 0,up =0, down =0;
        for(int j=0;j<n;j++)
        {
            if(i!=j){
            if(a[j][0]>a[i][0] && a[j][1] == a[i][1])
            right++;
            if(a[j][0]<a[i][0] && a[j][1] == a[i][1])
            left++;
            if(a[j][0] == a[i][0] && a[j][1] < a[i][1])
            down++;
            if(a[j][0] == a[i][0] && a[j][1] > a[i][1])
            up++;
            }
        }
        // cout<<left<<" "<<right<<" "<<up<<" "<<down<<endl;
        if(left >0  && right >0 && up >0 && down>0)
        ans++;
    }
    cout<<ans;
    return 0;
}