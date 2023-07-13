#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,x;
	    cin>>n>>k>>x;
	    if(x==1 && k==1)
	    cout<<"NO"<<endl;
	    else if(x!=1)
	    {
	        cout<<"YES"<<endl;
	        cout<<n<<endl;
	        for(int i=1;i<=n;i++)
	        cout<<1<<" ";
	        cout<<endl;
	    }
	    else{
	            if(n%k == 0)
	            {
	                cout<<"YES"<<endl;
	                cout<<n/k<<endl;
	                for(int l=1;l<=(n/k);l++)
	                cout<<k<<" ";
	                cout<<endl;
	            }
	            else if(k==2)
	            cout<<"NO"<<endl;
	            else if(n%2 ==0)
	            {
	                cout<<"YES"<<endl;
	                cout<<n/2<<endl;
	                for(int i=1;i<=(n/2);i++)
	                    cout<<2<<" ";
	                cout<<endl;
	            }
	            else
	            {
	                cout<<"YES"<<endl;
	                cout<<((n-3)/2)+1<<endl;
	                cout<<3<<" ";
	                n-=3;
	                for(int i=1;i<=(n/2);i++)
	                    cout<<2<<" ";
	                cout<<endl;
	            }
	        }
	    }
	return 0;
}