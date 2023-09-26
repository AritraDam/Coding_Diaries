#include<bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define all(o) (o).begin(), (o).end()
using namespace std;
typedef long long int ll;
typedef vector<int> vector;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x = (k*l)/nl;
    int y= c*d;
    int z= p/np;

    cout<<min({x,y,z})/n;
    return 0;
}