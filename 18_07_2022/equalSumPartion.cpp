//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        
        int sum =0;
        for(int i=0;i<N;i++)
        sum+=arr[i];
        if(sum%2!=0)
        return 0;
        else{
            sum = sum/2;
            int v[N+1][sum+1];
            for(int i=0;i<=N;i++)
               v[i][0] =1; 
            for(int i=1;i<=sum;i++)
                v[0][i] = 0;
            for(int i=1;i<=N;i++){
                for(int j=1;j<=sum;j++){
                    if(arr[i-1]<=j)
                    v[i][j] = v[i-1][j-arr[i-1]] || v[i-1][j];
                    else
                    v[i][j] = v[i-1][j];
                }
            }
            return v[N][sum];
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends