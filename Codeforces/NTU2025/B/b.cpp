#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int s = 0;
    int zero = 0;
    long long ans = 0;

    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
        {
            s++;
            ans += -1 - x;
        }
        else if (x == 0)
        {
            zero++;
            ans += 1;
        }
        else
        {
            ans += x - 1;
        }
    }

    if (s % 2 != 0 && zero == 0)
    {
        ans += 2;
    }

    cout << ans;
    return 0;
}