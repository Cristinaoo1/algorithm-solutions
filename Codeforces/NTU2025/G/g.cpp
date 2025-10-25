#include <bits/stdc++.h>
using namespace std;

bool ok(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, t;
    cin >> s >> t;
    if (s.size() != t.size())
    {
        cout << "No\n";
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        bool ss = ok(s[i]), tt = ok(t[i]);
        if (ss != tt)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
