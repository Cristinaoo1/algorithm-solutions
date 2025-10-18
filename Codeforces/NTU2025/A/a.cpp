#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << "Yes\n";
            continue;
        }
        int i = 0, j = n - 1, x = floor((n - 1) / 2), y = n / 2;
        while (i < j && s[i] == s[j])
        {
            i++, j--;
        }
        while (i <= x && y <= j && s[x] == s[y])
        {
            x--, y++;
        }
        if (i == x + 1)
        {
            cout << "Yes\n";
            continue;
        }
        else
        {
            while (((s[i] - '0') == 1 - (s[j] - '0')) && (i <= x))
            {
                i++, j--;
            }
            if (i == x + 1)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
}