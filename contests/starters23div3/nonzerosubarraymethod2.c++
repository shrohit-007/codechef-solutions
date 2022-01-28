#include <bits/stdc++.h>
#define ll long long
#define lld long long double
#define in insert
#define pb push_back
#define mod 1000000000 + 7
#define pi 3.14
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solution()
{
    int n;cin>>n;
    int i=1;
    for(int j=0;j<n;j++)
    {
        cout<<(i^(i+1))<<" ";
        i++;
    }cout<<endl;
}
int main()
{
    fios int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}