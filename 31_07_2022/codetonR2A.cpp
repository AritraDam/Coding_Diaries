#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string a,b;
	    cin>>a;
	    cin>>b;
	    bool flag = true;
	    int lengthb = m;
	    int lasta = n;
	    int lastb = m;
	    while(lengthb>1){
	        if(a[lasta-1]!=b[lastb-1])
	        {
	            flag = false;
	            break;
	        }
	        lengthb--;
	        lastb-=1;
	        lasta-=1;
	    }
	    if(flag){
	        if(b[0]==a[n-m])
	        cout<<"YES"<<endl;
	        else{
	            if(b[0]=='0'){
	               int ok =0;
	            for(int i=0;i<n-m;i++)
	             {
	                if(a[i]=='0')
	                {
	                    cout<<"YES"<<endl;
	                    ok =1;
	                    break;
	                }
	             }
	             if(ok ==0)
	             cout<<"NO"<<endl;
	            }
	            else{
	           int ok =0;
	           for(int i=0;i<n-m;i++)
	             {
	                if(a[i]=='1')
	                {
	                    cout<<"YES"<<endl;
	                    ok =1;
	                    break;
	                }
	             }  
	             if(ok==0)
	             cout<<"NO"<<endl;
	            }
	        }
	    }
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
