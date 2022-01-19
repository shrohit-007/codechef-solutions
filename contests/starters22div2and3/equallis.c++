#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define endl "\n"
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define spc " "
using namespace std;
void solution()
{
    ll n;
    cin >> n;
    if(n%2==1)
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=n/2;i++)
        cout<<i<<' ';
        cout<<n<<' ';
        for(int i=n-1;i>n/2;i--)
        cout<<i<<" ";
        cout<<endl;
    }
    else if(n!=2)
    {
        cout<<"YES"<<endl;
        cout<<n/2<<" ";
        for(int i=1;i<n/2;i++)
        cout<<i<<" ";
        for(int i=n;i>n/2;i--)
        cout<<i<<" ";
        cout<<endl;
    }
    else
    cout<<"NO"<<endl;
}
int main()
{
    fios int tt;
    cin >> tt;
    while (tt--)
        solution();
}