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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;

        for (int i = 0; i < s.length();)
        {
            if (s[i] == 'B')
            {
                i += k;
                ans++;
            }
            else
                i++;
        }
        cout << ans << "\n";
    }
    return 0;
}