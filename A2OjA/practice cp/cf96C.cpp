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
        iota(all(v), 1);
        cout << 2 << "\n";
        for (int i = 1; i <= n - 1; i++)
        {
            if (v.size() == 2)
            {
                cout << v[v.size() - 2] << " " << v[v.size() - 1] << "\n";
                v.pop_back();
                v.pop_back();
            }
            else if (v[v.size() - 1] == v[v.size() - 2])
            {
                int x = v.back();
                cout << v[v.size() - 2] << " " << v[v.size() - 1] << "\n";
                v.pop_back();
                v.pop_back();
                v.push_back(x);
            }
            else if ((v[v.size() - 1] + v[v.size() - 3]) % 2 == 0)
            {
                cout << v[v.size() - 3] << " " << v[v.size() - 1] << "\n";
                int x = v[v.size() - 2];
                int y = (v[v.size() - 1] + v[v.size() - 3]) / 2;
                v.pop_back();
                v.pop_back();
                v.pop_back();
                v.push_back(x);
                v.push_back(y);
            }
            else
            {
                cout << v[v.size() - 2] << " " << v[v.size() - 1] << "\n";
                int x = ceil((v[v.size() - 1] + v[v.size() - 2]) / 2);
                v.pop_back();
                v.pop_back();
                v.push_back(x);
            }
        }
    }
    return 0;
}