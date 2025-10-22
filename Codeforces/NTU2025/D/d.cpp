#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int n, neven = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                neven++;
            }
        }
        int m, meven = 0;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int y;
            cin >> y;
            if (y % 2 == 0)
            {
                meven++;
            }
        }
        cout << (neven * meven) + (n - neven) * (m - meven) << '\n';
    }
}