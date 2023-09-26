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

        int n, m, ans = 0;
        cin >> n >> m;
        char arr[n][m];
        rep(i, n)
        {
            rep(j, m)
                    cin >>
                arr[i][j];
        }
        for (int i = 0; i < n; i++)
            if (arr[i][m - 1] != 'C' && arr[i][m - 1] != 'D')
                ans++;
        for (int i = 0; i < m; i++)
            if (arr[n - 1][i] != 'R' && arr[n - 1][i] != 'C')
                ans++;

        cout << ans << "\n";
    }
    return 0;
}