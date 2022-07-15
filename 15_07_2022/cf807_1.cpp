#include <bits/stdc++.h>  
using namespace std;  

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int N,x,w,flag=0;
        int n;
        vector<int> h;
        cin>>N>>x;
        n=N*2;
        for(int i=0;i<n;i++){
            cin>>w;
            h.push_back(w);
        }
        n=n/2;
        sort(h.begin(),h.end());
        for(int i=0;i<n;i++){
            if(h[i+n]-h[i]<x)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}