// functio only
#include<bits/stdc++.h>
using namespace std;
int Count_with_diff(vector<int> arr,int diff){
    int sum = (diff+ accumulate(arr.begin(),arr.end(),0))/2;
    int a[arr.size()+1][sum+1];
    for(int i=0;i<=arr.size();i++)
    a[i][0]=1;
    for(int i=1;i<=sum;i++)
    a[0][i] = 0;
    for(int i=1;i<=arr.size();i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j)
                a[i][j] = a[i-1][j-arr[i-1]] + a[i-1][j];
            else
                a[i][j] = a[i-1][j];
        }
    }
    return a[arr.size()][sum];
}