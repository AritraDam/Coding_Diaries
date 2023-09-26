#include <bits/stdc++.h>
#define rep(i, n) for (int(i) = 0; (i) < (int)(n); ++(i))
#define all(o) (o).begin(), (o).end()
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
ll solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n), pref(n);
    rep(i, n) cin >> v[i];
    sort(all(v));
    pref[0] = 0;

    for (int i = 1; i < n; i++)
    {
        ll y = v[i] - v[i - 1];
        y *= i;
        pref[i] = pref[i - 1] + y;

        if (pref[i] > x)
        {
            return v[i - 1] + ((x - pref[i - 1]) / i);
        }
    }
    return v[n - 1] + ((x - pref[n - 1]) / n);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }
    return 0;
}