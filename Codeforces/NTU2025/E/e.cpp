#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << 2 << '\n';
        if (n == 2)
        {
            cout << "1 2\n";
            continue;
        }

        cout << n << ' ' << n - 1 << '\n';
        for (int i = n - 1; i > 1; --i)
        {
            cout << i + 1 << ' ' << i - 1 << '\n';
        }
    }

    return 0;
}
