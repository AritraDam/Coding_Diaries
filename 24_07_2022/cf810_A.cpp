#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int n;
        cin>>n;
        if(n==1)
        cout<<1<<endl;
        else{
            v.push_back(2);
            for(int i=3;i<=n;i++){
                v.push_back(i);
            }
            v.push_back(1);
            for(int j=0;j<v.size();j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
        
    }
	return 0;
}


