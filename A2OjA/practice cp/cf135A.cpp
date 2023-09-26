#include <bits/stdc++.h>
#define rep(i, n) for (int(i) = 0; (i) < (int)(n); ++(i))
#define all(o) (o).begin(), (o).end()
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
string solve(string s, vi v, int n)
{
    string ans = "", a = "";
    for (auto &it : s)
        v[it - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] % n == 0)
        {
            if (v[i])
            {
                for (int j = 0; j < v[i] / n; j++)
                    ans.push_back('a' + i);
            }
        }
        else
            return "-1";
    }
    for (int i = 1; i <= n; i++)
        a += ans;
    return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi v(26, 0);
    cout << solve(s, v, n);
    return 0;
}