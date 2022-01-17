#include<bits/stdc++.h>
#define ll long long
#define lld  long double
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define spc " "
#define mod 1000000007
#define ul unsigned long long
#define fios ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solution()
{
  ul n;cin>>n;
  vector<ul>v;
  ul cs=0,mn=INT_MAX,pos;
  for(int i=0;i<n;i++)
  {
      ul b;cin>>b;
      v.pb(b);
      if(mn>b)
      {
          mn=b;
          pos=i+1;
      }
      cs+=b;
  }
  ul check=cs&(cs-1);
  if(check==0)
  {
      cout<<"0"<<endl;
  }
  else
  {
      int cnt=0;
      ul temp=cs;
      while(temp>0)
      {
          cnt++;
          temp/=2;
      }
      cs-=mn;
      cs=pow(2,cnt)-cs;
      ul x=cs/mn;
      cout<<"1"<<endl;
      cout<<"1"<<" "<<x<<endl;
      cout<<pos<<endl;
  }

}
int main()
{
    fios int t=1;
    cin>>t;
    while(t--)
    solution();
}
   