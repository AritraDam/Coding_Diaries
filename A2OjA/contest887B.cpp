#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ans = 0;

        for(int i =1;i<=n;i++)
        {
            int second = n;
            int first = i;

            bool valid_seq = true;
            for(int j=0;j<k-2;j++)
            {
                int fx = first;
                first = second - fx;
                second = fx;

                valid_seq &= first<=second;
                valid_seq&= min(first,second) >=0;

                if(!valid_seq) break; 
            }
            if(valid_seq) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}