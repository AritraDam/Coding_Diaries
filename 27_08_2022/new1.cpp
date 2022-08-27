#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        if(n==1 || m==1)
        cout<<-1<<endl;
        else
        {
            if(d==0){
                cout<<(n-1)+(m-1)<<endl;
            }
            
            else{
                if(sx+d>=n && sx-d<=1)
                cout<<-1<<endl;
                else if(sy+d>=m && sy-d<=1)
                cout<<-1<<endl;
                else if(sx-d<=1 && sy-d<=1)
                cout<<-1<<endl;
                else if(sx+d>=n && sy+d>=m)
                cout<<-1<<endl;
                else{
                    cout<<(n-1)+(m-1)<<endl;
                }
            }
        }

    }
}