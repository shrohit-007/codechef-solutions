#include <bits/stdc++.h>
#define ll long long
#define mod 1000000000 + 7
#define rep(n) for (int i = 0; i < n; i++)
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll cnt = 0;
        ll n, d;
        cin >> n >> d;
        ll num = n, rem, cnt1 = 0;
        while (num > 0)
        {
            rem = num % 10;
            num /= 10;
            cnt1++;
            if (rem == d)
            {
                num = num * pow(10, cnt1) + (rem + 1) * pow(10, cnt1 - 1);
                cnt = num - n;
                cnt1 = 0;
            }
        }
        cout << cnt << endl;
    }
}
