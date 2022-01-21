#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long 
using namespace std;
ll int modula(ll int x){
   return ((x%mod)+mod)%mod;
}
ll int multiply(ll int a,ll int b){
    return modula(modula(a)*modula(b));
}
ll int modpow(ll int a, ll int b )
{ 
 if(b==1)return modula(a);
 ll int res=1;
 while(b>0){
     if(b%2==1)
     res=multiply(res,a);
     a=multiply(a,a);
     b/=2;
 }return res;
}
int main(){
    int t;cin>>t;
    while(t--)
    {
        ll int a,b;cin>>a>>b;
        ll int l,m,result;
        result=modpow(2,a);
        l=modula(result);
        m=modpow(l-1,b);
        cout<<modula(m)<<endl;

    }
}
