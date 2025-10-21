#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll mx = *max_element(a.begin(), a.end());

        while (m--)
        {
            char op;
            ll l, r;
            cin >> op >> l >> r;
            if (mx >= l && mx <= r)
            {
                if (op == '+')
                    mx++;
                else
                    mx--;
            }
            cout << mx << ' ';
        }
        cout << '\n';
    }
}
