#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,w,x;
	    string s = ""; 
	    vector<int> v;
	    cin>>n>>m;
	    for(int i=0;i<n;i++){
	        cin>>w;
	        v.push_back(w);
	    }
	    for(int i=0;i<m;i++)
	    s+='B';
	    for(int i=0;i<n;i++){
	        x = m+1-v[i];
	        if(v[i]<=x){
	            if(s[v[i]-1]!='A')
	            s[v[i]-1] = 'A';
	            else
	            s[x-1]='A';
	        }
	        else{
	            if(s[x-1]!='A')
	            s[x-1]='A';
	            else
	            s[v[i]-1]='A';
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
