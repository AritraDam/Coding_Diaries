#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string st;
        vector<int> ans;
        vector<string> s;
        vector<string>kaj;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>st;
            s.push_back(st);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i;j<n;j++){
            kaj.push_back(s[i]+s[j]);
            kaj.push_back(s[j]+s[i]);
            }
        }
        kaj.push_back(s[n-1]+s[n-1]);
        // for(int i=0;i<kaj.size();i++)
        // cout<<kaj[i]<<endl;
        for(int i=0;i<n;i++){
            if(find(kaj.begin(),kaj.end(),s[i])!=kaj.end())
            ans.push_back(1);
            else
            ans.push_back(0);
        }
        for(int i=0;i<n;i++)
        cout<<ans[i];
        cout<<endl;
    }
    return 0;
}