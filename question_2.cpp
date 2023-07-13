#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    map<char,int> m;
	    int n,sum =0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        m[s[i]]++;
	    }
	    for(auto &it:m)
	    sum+=(it.second +1);
	    
	    cout<<sum<<endl;
	}
	
	return 0;
}
