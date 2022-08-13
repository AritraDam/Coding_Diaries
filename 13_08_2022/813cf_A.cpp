#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,w;
        int count =0;
        cin>>n>>k;
        vector<int> v,y;
        priority_queue<int, vector<int>, greater<int> > x;
        for(int i=0;i<n;i++)
        {
            cin>>w;
            v.push_back(w);
        }
        for(int i=0;i<k;i++)
        y.push_back(v[i]);
        
        sort(y.begin(),y.end(),greater<int>());
        if(n==k)
        cout<<count<<endl;
        else{
            for(int i=k;i<n;i++)
            x.push(v[i]);
            for(int i=0;i<k;i++)
            {
                if(y[i]>x.top())
                {
                    int t = y[i];
                   y[i] = x.top();
                    x.pop();
                    x.push(t);
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}