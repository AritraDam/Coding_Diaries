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
        string s;
        cin>>s;
        long long sum =0;
        priority_queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L') sum+=i;
            else sum+=n-i-1;
        }
        // cout<<sum<<endl;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L') q.push((n-i-1)-i);
            else q.push(i-(n-i-1));
        }
        for(int i=0;i<n;i++)
        {
            sum+=max(0,q.top());
            cout<<sum<<" ";
            q.pop();
        }
        cout<<endl;
    }
    return 0;
}