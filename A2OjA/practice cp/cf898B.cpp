#include <bits/stdc++.h>
#define rep(i, n) for (int(i) = 0; (i) < (int)(n); ++(i))
#define all(o) (o).begin(), (o).end()
using namespace std;
typedef long long int ll;
typedef vector<int> vi;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        rep(i, n) cin >> v[i];
        int x = min_element(all(v)) - v.begin();
        v[x] += 1;
        ll ans = 1;
        rep(i, n)
            ans *= v[i];

        cout << ans << "\n";
    }
    return 0;
}