#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define fr(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int D,d,P,Q;cin>>D>>d>>P>>Q;
        ll unsigned int x,y,res;
        x=D/d-1;
        y=D%d;
        res=((((x+1)*P)+(Q*x*(x+1)/2))*d+(y*(Q*(x+1)+P)));
        cout<<res<<endl;
        
    }
}