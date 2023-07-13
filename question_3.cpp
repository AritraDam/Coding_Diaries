#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,t;
        string sk;
        vector<int> v;
        vector<string> s;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            v.push_back(t);
        }
        for(int i=0;i<n;i++){
            cin>>t;
            cin>>sk;
            s.push_back(sk);
        }
        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<s[i].length();j++){
                if(s[i][j]=='U'){
                    if(v[i]-1>=0)
                    v[i]-=1;
                    else
                    v[i]=9;
                }
                else{
                    if(v[i]+1<=9)
                    v[i]+=1;
                    else
                    v[i]=0;
                }
            }
        }
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
        
    }
    return 0;
}