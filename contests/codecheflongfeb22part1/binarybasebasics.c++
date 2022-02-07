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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
            cnt++;
    }
    k -= cnt;
    if (k >= 0 && k%2==0)
    {
        cout<<"YES"<<endl;
    }
    else if(k>=0 and n%2==1)
    cout<<"YES"<<endl;
    else
        cout << "NO" << endl;
}
int main()
{
    fios int tt;
    cin >> tt;
    while (tt--)
        solution();
}