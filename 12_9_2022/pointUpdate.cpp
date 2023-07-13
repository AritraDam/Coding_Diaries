#include <bits/stdc++.h>
using namespace std;
int a[100000], seg[4 * 100000];

void build(int indx, int low, int high)
{
    if (low == high)
    {
        seg[indx] = a[low];
        return;
    }
    int mid = (low+high)/2;
    build(2*indx+1,low,mid);
    build(2*indx+2,mid+1,high);
    seg[indx] = max(seg[2*indx+1],seg[2*indx+2]);
}

