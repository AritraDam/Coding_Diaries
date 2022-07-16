#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<ll> A;
	    set<ll> b;
	    ll N,K,w,sum =0;
	    cin>>N>>K;
	    for(ll i=0;i<N;i++){
	        cin>>w;
	        A.push_back(w);
	        b.insert(w);
	    }
	    for(ll i=0;i<N;i++){
	        ll h=0;
	        for(ll j=i;j<N;j++){
	            if(A[i]>A[j])
	            h++;
	        }
	        ll e = 0;
	        for(auto itr = b.begin();itr!=b.end();itr++){
	            if(*itr == A[i])
	            break;
	            e++;
	        }
	        sum+= (h*K) + (e*((K*(K-1))/2));
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
