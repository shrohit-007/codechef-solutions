#include<bits/stdc++.h>
#define mod 1000000000+7
#define ll long long
#define rep for(int i=0;i<n;i++)
using namespace std;
int main()
{
    int x;cin>>x;
    while(x--)
    {
        int n;cin>>n;
        int l,q,c,cntt=0;
        for( c=1;c<=n;c++)
        {
            for(q=c;q<=n;q+=c)
            {
                for(l=c;l<=n;l+=q)
                {
                    if(l%q==c && q%c==0)
                    cntt++;
                }
            }
        }
        cout<<cntt<<"\n";
    }
}
