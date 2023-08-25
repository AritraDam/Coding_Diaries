#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int ans =1;
	    string s;
	    cin>>n;
	    cin>>s;
	    int hola =1;
	    for(int i=1;i<s.length();i++)
	    {
	        if(s[i]==s[i-1])
	        hola++;
	        else 
	        {
	            ans = max(hola,ans);
	            hola =1;
	        }
	    }
	    ans = max(hola,ans);
	    cout<<ans+1<<endl;
	}
	return 0;
}