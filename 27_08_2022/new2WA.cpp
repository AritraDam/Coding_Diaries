#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n;
        vector<int> a,b,maxd;
        for(int i=0;i<n;i++)
        {
            cin>>w;
            a.push_back(w);
        }
        for(int i=0;i<n;i++)
        {
            cin>>w;
            b.push_back(w);
        }
        int min = b[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]<=min)
            cout<<min-a[i]<<" ";
            else{
            cout<<b[i]-a[i]<<" ";
            min = b[i];
            }
        }
        cout<<endl;
        maxd.push_back(b[n-1]-a[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            int sum = a[i+1]+maxd[maxd.size()-1];
            if(a[i+1]<=b[i])
            maxd.push_back(sum-a[i]);
            else
            maxd.push_back(b[i]-a[i]);
        }
        reverse(maxd.begin(),maxd.end());
        for(auto &it:maxd)
        cout<<it<<" ";
        cout<<endl;

    }
}