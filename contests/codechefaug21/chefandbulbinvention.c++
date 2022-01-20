#include <bits/stdc++.h>
#define ll long long
#define mod 1000000000 + 7
#define rep for (int i = 0; i < n; i++)
using namespace std;
void solution()
{ //c=p (the index at which the bulb will be invented or gas will work )
    unsigned long long n, c, k;
    cin >> n >> c >> k;
    unsigned long long days = 0, temp, x, y, z;
    x = c % k;
    if (x != 0)
    {
        y = (n - 1) % k;
        if (y >= x)
            days += x * ceil((n - 1) * 1.0 / k);
        else
        {
            days += (y + 1) * ceil((n - 1) * 1.0 / k);
            days += (x - y - 1) * ((n - 1) / k);
        }
    }
    temp = (c / k) + 1;
    days += temp;
    if((n-1)%k==0 && x!=0)
    cout << days + 1 << "\n";
    else
    cout << days << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}