#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        // if(n==1)
        // {
        //     if(m%2 ==0)
        //     cout<<"Burenka"<<endl;
        //     else
        //     cout<<"Tonya"<<endl;
        // }
        // else{
        cin>>n>>m;
            if(n%2==0)
            {
                // cout<<"Hi"<<" "<<m<<endl;
                if(m%2==0)
                cout<<"Tonya"<<endl;
                else
                cout<<"Burenka"<<endl;
            }
            else
            {
                if(m%2==0)
                cout<<"Burenka"<<endl;
                else
                cout<<"Tonya"<<endl;
            }
        }
        return 0;
    }
    
// }