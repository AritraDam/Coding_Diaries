#include <bits/stdc++.h>
#define rep(i, n) for (int(i) = 0; (i) < (int)(n); ++(i))
#define all(o) (o).begin(), (o).end()
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
ll Xor(vector<ll> &v)
{
    if (v.size() == 0)
        return -1;
    ll x = v[0];
    for (ll i = 1; i < v.size(); i++)
        x = x ^ v[i];
    return x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(m);
        vector<ll> c, d, e, f, g, h;
        rep(i, n) cin >> a[i];
        rep(i, m) cin >> b[i];
        ll Or = 0;
        rep(i, m)
            Or = b[i] | Or;
        ll Max = 0, Min = 0;
        rep(i, n)
        {
            Max = Max ^ a[i];
            Min = Min ^ (a[i] | Or);
        }
        if (Max < Min)
            swap(Max, Min);
        cout << Min << " " << Max << "\n";
    }
    return 0;
}