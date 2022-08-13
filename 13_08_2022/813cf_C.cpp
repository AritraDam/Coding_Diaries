#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,w,index=-1,Newindex=-1;
        cin>>n;
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>w;
            v.push_back(w);
        }
        if(v.size()==1)
        cout<<0<<endl;
        else{
            for(int i=0;i<v.size()-1;i++)
            {
                if(v[i]>v[i+1])
                index =i;
                
            }
            // cout<<index<<endl;
            if(index != -1)
            {
                for(int i=0;i<=index;i++)
               {
                 m[v[i]]=1;
               }
            //   for(auto &it:m)
            //         cout<<it.first<<" "<<it.second<<"    ";
            //         cout<<endl;
            for(int i=index+1;i<v.size();i++)
               {
                if(m.find(v[i])!=m.end())
                Newindex =i;
               }
            //   cout<<Newindex<<endl;
            //     for(auto &it:m)
            //         cout<<it.first<<" "<<it.second<<"    ";
            //         cout<<endl;
               if(Newindex!=-1)
               {
                    for(int i=index+1;i<=Newindex;i++)
                    {m[v[i]]=1;}
                    cout<<m.size()<<endl;
                    // cout<<"HI"<<endl;
               }
               else
                {   
                    cout<<m.size()<<endl;
                    // for(auto &it:m)
                    // cout<<it.first<<" "<<it.second<<"    ";
                    
                }
            }
            else
            cout<<0<<endl;
        }
    }
    return 0;
}