#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int w;
        int flag =-1;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            cin>>w;
            v.push_back(w);
        }
        for(int i=n-1;i>=0;i--){
            if(arr[v[i]-1]>0)
            {
                flag =i;
                break;
            }
            else
            arr[v[i]-1]++;
        }
        if(flag==-1)
        cout<<0<<endl;
        else
        cout<<flag+1<<endl;
        // for(auto &i:arr)
        // cout<<i<<" ";
    }
    return 0;
}