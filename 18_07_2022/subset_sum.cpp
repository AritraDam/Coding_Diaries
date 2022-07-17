//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int a[arr.size()+1][sum+1]; 
    for(int i=0;i<=arr.size();i++)
    a[i][0] = 1;
    for(int i=1;i<=sum;i++)
    a[0][i] = 0;
    
        for(int i=1;i<=arr.size();i++){
            for(int j=1;j<=sum;j++){
             if(arr[i-1]<=j){
                    a[i][j] = a[i-1][j-arr[i-1]] || a[i-1][j];
                }
              else
                a[i][j] = a[i-1][j];
            }
        }
        return a[arr.size()][sum];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends