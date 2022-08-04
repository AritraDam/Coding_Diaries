#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> v;
        cin>>n;
        cout<<n<<endl;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
            cout<<i<<" ";
        }
        cout<<endl;
        int x;
        for(int i=n-1;i>0;i--)
        {
            x=v[i];
            v[i] = v[i-1];
            v[i-1] = x;
            for( auto &it: v)
            cout<<it<<" ";
            cout<<endl;
        }
    }
    return 0;
}