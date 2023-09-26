#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        vector<int> v(n);
        v[0] = x;
        v[n-1] = y;
        int k=1;
        for(int i=n-2;i>=1;i--)
        {
            v[i] = v[i+1] - k;
            k++;
        }
        if(n==2)
        cout<<x<<" "<<y<<endl;
        else if(v[1]-v[0]<=v[2]-v[1])
        cout<<-1<<endl;
        else{
            for(auto &it: v)
            cout<<it<<" ";
            cout<<endl;
        }
    }
    return 0;
}