#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,sum = 0;
	    cin>>n;
	    while(n>0)
	    {
	        sum+=n;
	        n/=2;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}