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
    int x = 1;
    while (t--)
    {
        int S, D, K;
        cin >> S >> D >> K;
        int b = 0, p = 0, c = 0;
        b += 2 * S + 2 * D;
        p += S + 2 * D;
        c += S + 2 * D;

        if (b >= K + 1 && p >= K && c >= K)
            cout << "Case #" << x << ": YES\n";
        else
            cout << "Case #" << x << ": NO\n";
        x++;
    }
    return 0;
}