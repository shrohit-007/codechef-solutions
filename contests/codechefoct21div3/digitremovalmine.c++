#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 100000000 + 7
#define rep(n) for (int i = 0; i < n; i++)
using namespace std;
ll poweroften(int a)
{
    ll res = 1;
    if (a == 0)
        return 1;
    while (a--)
        res *= 10;
    return res;
}
void solution()
{
    ll n, d;
    cin >> n >> d;
    ll sum = 0;
    if (d == 0)
    {
        ll temp = n;
        ll temp1 = 0;
        int pos = 0, i = 1;
        while (n > 0)
        {
            if (n % 10 == 0)
                pos = i;
            i++;
            n /= 10;
        }
        int j = 0;
        int var = pos - 1;
        while (pos > 0)
        {
            temp1 += (temp % 10) * poweroften(j);
            temp /= 10;
            j++;
            pos--;
        }
        ll sum1 = 1;
        int k = 1;
        while (var > 0)
        {
            sum1 += poweroften(k);
            k++;
            var--;
        }
        sum = sum1 - temp1;
    }
    else
    {
        ll temp3 = n;
        ll temp1 = 0;
        ll j = 0;
        while (temp3 > 0)
        {
            if (temp3 % 10 == d)
            {
                ll tmp = poweroften(j) - temp1;
                sum += tmp;
                j = 0;
                n += tmp;
                temp3 = n;
                temp1 = 0;
            }
            temp1 += (temp3 % 10) * poweroften(j);
            temp3 /= 10;
            j++;
        }
    }
    cout << sum << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
}
