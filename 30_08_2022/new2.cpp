#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<string,int> x,y,z;
        int n;
        string s;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            x[s]=1;
        }
        for(int i=0;i<n;i++)
        {
            cin>>s;
            y[s]=1;
        }
        for(int i=0;i<n;i++)
        {
            cin>>s;
            z[s]=1;
        }
        int point1=0,point2=0,point3=0;
        for(auto &it:x)
        {
            if(y.find(it.first)==y.end() && z.find(it.first)==z.end())
            point1+=3;
            else if(y.find(it.first)!=y.end() && z.find(it.first)!=z.end())
            point1+=0;
            else point1+=1;
        }
        for(auto &it:y)
        {
            if(x.find(it.first)==x.end() && z.find(it.first)==z.end())
            point2+=3;
            else if(x.find(it.first)!=x.end() && z.find(it.first)!=z.end())
            point2+=0;
            else point2+=1;
        }
        for(auto &it:z)
        {
            if(x.find(it.first)==x.end() && y.find(it.first)==y.end())
            point3+=3;
            else if(x.find(it.first)!=x.end() && y.find(it.first)!=y.end())
            point3+=0;
            else point3+=1;
        }
        cout<<point1<<" "<<point2<<" "<<point3<<endl;
    }
    return 0;
}