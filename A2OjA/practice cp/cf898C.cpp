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
        char v[10][10];
        int ans = 0;
        rep(i, 10)
        {
            rep(j, 10)
            {
                cin >> v[i][j];
            }
        }

        rep(i, 10)
        {
            rep(j, 10)
            {
                if (v[i][j] == 'X')
                {
                    if (i == 0 || j == 0 || i == 9 || j == 9)
                    {
                        ans += 1;
                        continue;
                    }
                    if (i == 1 || j == 1 || i == 8 || j == 8)
                    {
                        ans += 2;
                        continue;
                    }
                    if (i == 2 || j == 2 || i == 7 || j == 7)
                    {
                        ans += 3;
                        continue;
                    }
                    if (i == 3 || j == 3 || i == 6 || j == 6)
                    {
                        ans += 4;
                        continue;
                    }
                    if (i == 4 || j == 4 || i == 5 || j == 5)
                    {
                        ans += 5;
                        continue;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}