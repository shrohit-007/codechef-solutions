#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl "\n"
#define fios  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define spc " "
using namespace std;
void solution()
{
    ll k;cin>>k;
    ll temp=k&(k-1);
    if(k==1)
    cout<<"0"<<endl;
    else
    {
    if(temp==0)
    {
        ll ans=0;
        while(k>0)
        {
            ans++;
            k>>=1;
        }
        cout<<ans-1<<endl;
    }
    else
    {
        ll ans1=0,y=0,x=k;
        if(k%2==0)
        {
            while(x>0)
            {
                ll temp=x/2;
                y+=temp;
                if(y+temp==k)
                {
                    ans1++;
                }
                else
                {
                    break;
                }
                x/=2;
            }
            cout<<ans1<<endl;
        }
        else
        cout<<"0"<<endl;
    }
    }
}
int main()
{
  fios 
  int tt;cin>>tt;
  while(tt--)
  solution();
}
