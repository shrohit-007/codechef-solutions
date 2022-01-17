#include <bits/stdc++.h>
#define ll long long
#define lld long long double
#define in insert
#define pb push_back
#define mod 1000000000 + 7
using namespace std;
void solution()
{
    int n, x;
    cin >> n >> x;
    unordered_map<int,int>m;
    int i=0;
    while(n>1)
    {
        int a=x^i;
        if(a==0 or a>500000 or m[a]==1)
        {
            i++;
            continue;
        }
        cout<<i<<" ";
        m[i]=1;
        x=a;
        n--;
        i++;
    }
    cout<<x<<"\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
}