#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
           v.push_back(i+1);
        if(v.size()==1)
        cout<<1<<endl;
        else{
            if(v.size()%2 == 0)
            {
                for(int i=0;i<v.size()-1;i+=2)
                {
                    int t=v[i];
                    v[i] = v[i+1];
                    v[i+1] = t;
                }
            }
            else
            {
                for(int i=1;i<v.size()-1;i+=2)
                {
                    int t=v[i];
                    v[i] = v[i+1];
                    v[i+1] = t;
                }
            }
            for(auto &it:v)
            cout<<it<<" ";
            cout<<endl;
        }
    }
    return 0;
}