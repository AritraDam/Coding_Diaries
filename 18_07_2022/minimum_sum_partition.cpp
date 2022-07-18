//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    int range = accumulate(arr,arr+n,0);
	    int v[n+1][range+1];
	    for(int i=0;i<=n;i++)
	    v[i][0]=1;
	    for(int i=1;i<=range;i++)
	    v[0][i]=0;
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=range;j++){
	            if(arr[i-1]<=j)
	            v[i][j] = v[i-1][j-arr[i-1]] || v[i-1][j];
	            else
	            v[i][j] = v[i-1][j];
	        }
	    }
	    vector<int> x;
	    for(int i=0;i<=(range/2);i++)
	    {
	        if(v[n][i]==1)
	        x.push_back(i);
	    }
	    int minn= INT_MAX;
	    for(int i=0;i<x.size();i++)
	    minn = min(minn,range-(2*x[i]));
	    
	    return minn;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends