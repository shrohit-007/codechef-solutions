#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int T;cin>>T;
    while(T--)
    {
        long long int n,m;cin>>n>>m;
        unordered_map<int,int>check;
        multimap<long long ,long long >vec;
        for(int i=0;i<m;i++)
        {
            long long  x,y;cin>>x>>y;
            vec.insert({-1*x,y});
        }
        long long sum=0;
        for(auto &it :vec)
        {   
            int temp,y;
            if(check.find(it.second)==check.end())
            {
            if(it.second<=n)
            {
            temp=floor(n/it.second);
            y=n-temp;
            check[it.second]=0;
            sum+=y*(-1)*it.first;
            n=temp;
            }
            else{
                int cnt=0,mult=1;
                for(auto &it1 :check)
                {
                    mult*=it1.first;
                }
                for(int i=1;i<=n;i++)
                {  
                   if((mult*i)%it.second!=0)
                   cnt++;
                }
                check[it.second]=0;
                n-=cnt;
                sum+=cnt*(-1)*it.first;
            }  
            }
            if(n==0)
            break;
        }
        cout<<sum<<"\n";

    }
}