#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int a;cin>>a;
            m[a]++;
        }
        int mx=0;
        for(auto &it:m)
        {
            mx=max(mx,it.second);
        }
        if(n==1 or mx==n)
        cout<<"0"<<endl;
        else if(mx>=2)
        cout<<n-mx+1<<endl;
        else
        cout<<"-1"<<"\n";
        
    }
}
