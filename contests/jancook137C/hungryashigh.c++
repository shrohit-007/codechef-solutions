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
   int x,y,z;cin>>x>>y>>z;
   if(x>=y)
   cout<<"PIZZA"<<endl;
   else if(x>=z)
   cout<<"BURGER"<<endl;
   else
   cout<<"NOTHING"<<endl;
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
