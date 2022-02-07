#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl "\n"
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define spc " "
using namespace std;
void solve()
{
    cout << "HELLO HERE I AM ROHIT" << endl;
}
void solution()
{
    int n;
    cin >> n;
    vector<ll> v;
    int cnto = 0;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.pb(a);
        if (a & 1)
            cnto++;
    }
    if (cnto == 0)
        cout << "-1" << endl;
    else
    {
        vector<int> e, o;
        int posee, poseo;
        int posoe, posoo;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (v[i] % 2 == 0)
                {
                    o.pb(i + 1);
                    posee = i + 1;
                }
                else
                {
                    e.pb(i + 1);
                    posoo = i + 1;
                }
            }
            else
            {
                if (v[i] % 2 == 0)
                {
                    e.pb(i + 1);
                    posoe = i + 1;
                }
                else
                {
                    o.pb(i + 1);
                    poseo = i + 1;
                }
            }
        }
        int m = o.size();
        int m1 = e.size();
        if (m == 0 or m1 == 0)
            cout << "0" << endl;
        else
        {
            if (m <= m1)
            {
                cout << m << endl;
                for (int i = 0; i < m; i++)
                {
                    if (o[i] % 2 == 0)
                    {
                        cout << o[i] << " " << posoo << endl;
                    }
                    else
                    {
                        cout << o[i] << " " << posoo << endl;
                    }
                }
            }
            else
            {
                cout << m1 << endl;
                for (int i = 0; i < m1; i++)
                {
                    if (e[i] % 2 == 0)
                    {
                        cout << e[i] << " " << poseo << endl;
                    }
                    else
                    {
                        cout << e[i] << " " << poseo << endl;
                    }
                }
            }
        }
    }
}
int main()
{
    fios int tt;
    cin >> tt;
    while (tt--)
        solution();
}