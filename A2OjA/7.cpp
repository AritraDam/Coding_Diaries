#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,w;
    cin>>n>>m;
    queue<int> q,pos;
    for(int i=0;i<n;i++)
    {
        cin>>w;
        q.push(w);
        pos.push(i+1);
    }
    while(q.size()!=1)
    {
        if(q.front()<=m)
        {
            q.pop();
            pos.pop();
        }
        else{
            pos.push(pos.front());
            pos.pop();
            q.push(q.front()-m);
            q.pop();
        }
    }
    cout<<pos.front();
    return 0;
}