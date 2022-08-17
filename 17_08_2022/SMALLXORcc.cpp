#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,w,min,cal;
        priority_queue<ll,vector<ll>,greater<ll>> q;
        cin>>n>>x>>y;
        for(ll i=0;i<n;i++)
        {
            cin>>w;
            q.push(w);
        }
        while(y>0)
        {
            // cout<<y<<" ";
            min = q.top();
            cal = (min^x);
            q.pop();
            q.push(cal);
            // cout<<q.top()<<" "<<min<<endl;
            y-=1;
            if(q.top() == cal)
            break;
            
        }
        // cout<<y<<endl;
        if(y%2 != 0)
        {
            min = (q.top() ^ x);
            q.pop();
            q.push(min);
        }

        while(!q.empty())
        {
            cout<<q.top()<<" ";
            q.pop();
        }
        cout<<endl;
    }
    return 0;
}