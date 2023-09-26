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
        ll a, b, c;
        cin >> a >> b >> c;
        if (a < c)
            cout << 1 << " " << -1 << endl;
        else if (a > c)
            cout << -1 << " " << 1 << endl;
        else
        {
            if (b == 1)
                cout << -1 << " " << -1 << endl;
            else
                cout << -1 << " " << 2 << endl;
        }
    }
    return 0;
}