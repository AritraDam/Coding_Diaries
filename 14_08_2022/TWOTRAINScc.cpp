#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   // cout<<"##################"<<endl;
	    
	    int n,w,timeA=0,timeB=0;
	    cin>>n;
	    vector<int>p,sum;
	    
	    p.push_back(0);
	    sum.push_back(0);
	    
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>w;
	        p.push_back(w);
	       // cout<<w<<" "<<i<<endl;
	        sum.push_back(sum[i]+p[i+1]);
	    }
	    timeA = p[1];
	   // for(auto &it:p)
	   // cout<<it<<" ";
	   // cout<<endl;
	   // for(auto &it:sum)
	   // cout<<it<<" ";
	   // cout<<endl;
	    for(int i=0;i<sum.size()-1;)
	    {
	        if(timeA>=sum[i+1])
	        {
	            timeB+=p[i+1];
	            timeA+=p[i+1];
	            i++;
	           // cout<<timeA<<" "<<timeB<<" "<<i<<"hola"<<endl;
	        }
	        else if(timeA<sum[i+1])
	        {
	            timeB+= sum[i+1]-timeA;
	            timeA = sum[i+1];
	           // cout<<timeA<<" "<<timeB<<" "<<i+1<<endl;   
	        }
	    }
	   // if(flag)
	   // timeB+=(p[1]+p[n-1]);
	   // else
	    timeB+=(p[1]);
	    
	    cout<<timeB<<endl;
	}
	return 0;
}
