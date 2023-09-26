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
    vector<vector<int>> v(2 * n + 1, vector<int>(2 * n + 1, -1));
    for (int i = 0; i <= n; i++)
        v[i][n] = i;
    int k = n - 1;
    for (int i = n + 1; i <= 2 * n; i++)
        v[i][n] = k--;
    for (int i = 0; i <= 2 * n; i++)
    {
        for (int j = n + 1; j <= 2 * n; j++)
        {
            if (v[i][j - 1] - 1 < 0)
                break;
            v[i][j] = v[i][j - 1] - 1;
        }
        for (int j = n - 1; j >= 0; j--)
        {
            if (v[i][j + 1] < 0)
                break;
            v[i][j] = v[i][j + 1] - 1;
        }
    }
    for (int i = 0; i <= 2 * n; i++)
    {
        for (int j = 0; j <= 2 * n; j++)
        {
            if (v[i][j] == -1 && j > n)
                break;
            else if (v[i][j] == -1)
                cout << "  ";
            else
            {
                if (j >= n && v[i][j] == 0)
                    cout << v[i][j];
                else
                    cout << v[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}