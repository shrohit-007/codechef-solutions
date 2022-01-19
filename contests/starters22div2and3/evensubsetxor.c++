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
    ll i=1,x=1;
    vector<ll>v;
    v.pb(1);
    ll num=1000,cnt=1;
    int cntr=0;
    while(cntr!=n)
    {   
        ll cnt1=0;
        x=cnt;
        while(x!=0)
        {
            x=x&(x-1);
            cnt1++;
        }
        if(cnt1%2==0)
        {
            v.pb(cnt);
            cntr++;
        }
        cnt++;
    }
    for(int i=0;i<n;i++)
    cout<<v[i]<<' ';
    cout<<endl;
 
  
}
int main()
{
    fios int tt;
    cin >> tt;
    while (tt--)
        solution();
}