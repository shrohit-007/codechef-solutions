#include <bits/stdc++.h>
#define ll long long
#define lld long long double
#define in insert
#define pb push_back
#define mod 1000000000 + 7
#define pi 3.14
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solution()
{
    int n, x;
    cin >> n >> x;
    string s;cin>>s;
    int cnt=0;
    int ans=0;
    string s1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            ++cnt;
            if(cnt==x)
            {
                ans+=1;
                cnt=0;
            }
        }
        else
        {
            while(cnt)
            {
                s1+='0';
                --cnt;
            }
            s1+='1';
        }
    }while(cnt)
    {
        s1+='0';
        --cnt;
    }
    cnt=0;
    for(int i=0;i<s1.length();i++)
    {
        if(i<x)
        {
            if(s1[i]=='0')
            cnt++;
        }
        else
        {
            if(s1[i-x]=='0')cnt--;
            if(s1[i]=='0')cnt++;
        }
        if(cnt==x-1)
        {
            ans+=1;
            break;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    fios int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}