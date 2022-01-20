#include<bits/stdc++.h>
#define ll long long 
#define rep fpr(int i=0;i<n;i++)
#define mod 1000000000+7
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int m1,x1,a1,m2,x3,a9;
        cin>>m1>>x1>>a1>>m2>>x3>>a9;
        if((m1+x1+a1)>(m2+x3+a9))
        cout<<"1"<<"\n";
        else
        cout<<"2"<<"\n";
    }
}