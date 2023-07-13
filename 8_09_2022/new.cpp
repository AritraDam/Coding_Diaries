#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        vector<int> v;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>w;
            v.push_back(w);
        }
        cout<<max_element(v.begin(),v.end())-v.begin()+1<<endl;
    }
    return 0;
}