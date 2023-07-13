#include<bits/stdc++.h>
using namespace std;
int a[100000],seg[4*100000];

void build(int indx,int low,int high)
{
    if(low == high)
    {
        seg[indx] = a[low];
        return;
    }
    int mid = (low+high)/2;
    build(2*indx+1,low,mid);
    build(2*indx+2,mid+1,high);
    seg[indx] = max(seg[2*indx+1],seg[2*indx+2]);
}

int query(int indx,int low,int high,int l,int r){
    if(low>=l && high<=r) return seg[indx];
    if(high<l || low>r) return INT_MIN;
    int mid = (low+high)/2;
    int left  = query(2*indx+1,low,mid,l,r);
    int right  = query(2*indx+2,mid+1,high,l,r);

    return max(left,right);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    build(0,0,n-1);
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<query(0,0,n-1,l,r)<<endl;
    }

    return 0;
}
