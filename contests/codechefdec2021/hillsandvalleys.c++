#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        if(n==m)
        {
            cout<<2*n+2<<endl;
            for(int i=0;i<(2*n+2);i++)
            {
                if(i%2==0)
                cout<<"1";
                else
                cout<<"0";
            }
        }
        else if(n>m)
        {
            cout<<3*n-m<<endl;
            for(int i=0;i<(2*n+1);i++)
            {
                if(i==0 or i==2*n)
                cout<<"0";
                else if(i%2==1)
                cout<<"1";
                else
                {
                    if(m>0)
                    cout<<"0";
                    else 
                    cout<<"00";
                    m--;
                }
            }
        }
        else
        {
            cout<<3*m-n<<endl;
            for(int i=0;i<(2*m+1);i++)
            {
                if(i==0 or i==2*m)
                cout<<"1";
                else if(i%2==1)
                cout<<"0";
                else
                {
                    if(n>0)
                    cout<<"1";
                    else
                    cout<<"11";
                    n--;
                }
            }
        }
        cout<<"\n";
    }
}