#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    double ans = 1;
    long long nn = n;
    while (nn)
    {
        if (nn % 2)
        {
            ans = ans * x;
            nn = nn - 1;
        }
        else
        {
            x = x * x;
            nn = nn / 2;
        }
    }
    if (n < 0)
        ans = (double)(1.0) / (double)(ans);
    cout << "Solution:-" << ans << endl;
}