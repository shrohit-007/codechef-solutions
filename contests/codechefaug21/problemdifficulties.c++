#include<bits/stdc++.h>
#define mod 1000000000+7
#define ll long long
#define rep for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
void solve()
{
      unordered_map<int,int>vxx;
        for(int i=0;i<4;i++)
        {
            int a;cin>>a;
            vxx[a]++;
            
        }
        if(vxx.size()==1)
        cout<<"0"<<"\n";
        else if(vxx.size()==2)
        {   
            int count=0;
            for(auto &it :vxx)
            {
                if(it.second==2)
                count++;
            }
            if(count)
                cout<<"2"<<"\n";
            else
                cout<<"1"<<"\n";
        }
        else
        cout<<"2"<<"\n";
}
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;cin>>t;
    while(t--)
    {
      solve();      
    }
}