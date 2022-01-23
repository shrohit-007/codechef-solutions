#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ppb pop_back
#define in insert
#define all(s) s.begin(),s.end()
#define mod 1000000007
#define lld long double
#define vi vector<int>
#define spc " "
#define endl "\n"
#define fios ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define repp(n)   for(int (i)=(0);(i)<(n);++i)
#define MAX 1000000000
using namespace std;
void solution( )
{
   int n;cin>>n;
   vector<int>v;
   ll sum=0;
   for(int i=0;i<n;i++)
   {
       int a;cin>>a;
       v.pb(a);
       sum+=a;
   }
   sort(all(v));
    sum-=v.back();
    double ans=sum*1.0/(n-1);
    double ans1=ans+v.back();
    cout<<fixed<<setprecision(6)<<ans1<<endl;
}
int main()
{
    fios
    int tt=1;
    cin>>tt;
    while(tt--)
    {
         solution();
    }
}