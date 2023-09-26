#include <bits/stdc++.h>
#define rep(i, n) for (int(i) = 0; (i) < (int)(n); ++(i))
#define all(o) (o).begin(), (o).end()
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
ll solve(ll n, ll m)
{
    if (n > m)
        return 0;
    if (n == m)
        return 1;

    ll l = 0, r = 0;
    if (m % 2 == 0)
        l = solve(n, m / 2);
    if (m % 3 == 0)
        r = solve(n, m / 3);

    if (l || r)
        return 1 + max(l, r);
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, m;
    cin >> n >> m;
    ll count = 0;
    if ((m % 2 != 0 || m % 3 != 0) && m % n != 0)
        cout << -1;
    else
    {
        cout << solve(n, m) - 1;
    }
    return 0;
}