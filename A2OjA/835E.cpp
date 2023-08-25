#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solvex(vector<int> &v,int n)
{   ll zero =0,sum =0;
    for(int i=n-1;i>=0;i--)
        {
            if(v[i]==0)
            zero++;
            else
            sum+=zero;
        }

    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for(auto &x: v)
            cin>>x;
        ll sum1=0,sum2=0,sum3=0,j=-1,k=-1;
        sum1 = solvex(v,n);
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                v[i] =1;
                j=i;
                break;
            }
        }
        sum2 = solvex(v,n);
        if(j!=-1)
        v[j] = 0;

        for(int i=n-1;i>=0;i--)
        {
            if(v[i]==1)
            {
                v[i] = 0;
                k=i;
                break;
            }
        }
        sum3 = solvex(v,n);

        cout<<max({sum1,sum2,sum3})<<endl;
    }
    return 0;
}