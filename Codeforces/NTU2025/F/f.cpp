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
        int x, y, z, xx, yy, zz, a, b;
        cin >> x >> y >> z >> xx >> yy >> zz;
        a = min(x, zz);
        x -= a;
        zz -= a;
        b = min(z, zz);
        z -= b;
        zz -= b;
        cout << 2 * (min(z, yy) - min(y, zz)) << '\n';
    }
}
