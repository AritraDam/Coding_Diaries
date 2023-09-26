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
    int n;
    cin >> n;
    vi v(7);
    rep(i, 7) cin >> v[i];
    int i = 0;
    int sum = 0;
    while (1)
    {
        sum += v[i % 7];
        if (sum >= n)
        {
            cout << (i % 7) + 1;
            break;
        }
        i++;
    }
    return 0;
}