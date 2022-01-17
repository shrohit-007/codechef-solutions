#include<bits/stdc++.h>
#define ll long long
#define lld long long double
#define in insert
#define pb push_back
#define mod 1000000000+7
using namespace std;
void solution()
{
    string s;cin>>s;
    if(s.length()<=1)
    cout<<"NO"<<endl;
    else
    {
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                if(s[i+1]=='0' or s[i+1]=='1')
                flag=1;
            }
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    solution();
}
