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
        int n, k, x;
        cin >> n >> k >> x;
        vi v;
        if (n < k || k - x > 1)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < k; i++)
                v.push_back(i);
            if (k == x)
            {
                for (int i = v.size(); i < n; i++)
                    v.push_back(k - 1);
            }
            else
            {
                for (int i = v.size(); i < n; i++)
                    v.push_back(x);
            }
            // for (auto &it : v)
            //     cout << it << " ";
            // cout << "\n";
            cout << accumulate(all(v), 0) << "\n";
        }
    }
    return 0;
}