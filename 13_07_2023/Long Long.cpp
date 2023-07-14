#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	int t;
	cin>>t;
	while(t--){
	   ll n,w,sum =0,count =0,ans =0;
	   cin>>n;
	   vector<ll> v;
	   for(int i=0;i<n;i++)
	   {
	       cin>>w;
	       if(w!=0)
	       v.push_back(w);
	       sum+=abs(w);
	   }
	   bool neg=false;
	   for(int i=0;i<v.size();i++)
	   {
	       if(v[i]<0 && neg == false)
	       {
	           neg = true;
	       }
	       else if(v[i]>0 && neg == true)
	       {
	           neg = false;
	           ans++;
	       }
	   }
	   if(neg==true) ans++;
	   
	   
	   cout<<sum<<" "<<ans<<endl;
	}
	return 0;
}