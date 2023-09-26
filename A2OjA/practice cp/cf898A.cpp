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
        string s;
        cin >> s;
        if (s == "abc")
            cout << "YES\n";
        else
        {
            string x = s;
            swap(x[0], x[1]);
            if (x == "abc")
            {
                cout << "YES\n";
                continue;
            }
            x = s;
            swap(x[1], x[2]);
            if (x == "abc")
            {
                cout << "YES\n";
                continue;
            }
            x = s;
            swap(x[0], x[2]);
            if (x == "abc")
            {
                cout << "YES\n";
                continue;
            }
            cout << "NO\n";
        }
    }
    return 0;
}