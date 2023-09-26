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
    int window = 1;
    int n;
    string s;
    cin >> n;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.length();)
    {
        ans += s[i];
        for (int j = 1; j <= window; j++)
            i++;
        window++;
    }
    cout << ans;
    return 0;
}