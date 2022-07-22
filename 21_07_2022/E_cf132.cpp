#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        if(arr[x-1]==0)
        cout<<"NO"<<endl;
        else if(arr[arr[x-1]-1]==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
	return 0;
}

