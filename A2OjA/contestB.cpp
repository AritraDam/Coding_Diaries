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
        int i=1;
        int ans = -1;
        int max = -1;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a<=10)
            {
                if(max<b)
                {
                    max = b;
                    ans = i;
                } 
            }
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}