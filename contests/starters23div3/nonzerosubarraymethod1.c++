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
    int n;cin>>n;
    int arr[n+1];
    int i=0,j=0;
    while(n>0)
    {
        int val=pow(2,i);
        arr[j]=val;
        int p=j;
        for(int k=0;k<p;k++)
        {
            j++;
            arr[j]=arr[k];
            n--;
            if(n==0)
            break;
        }
        j++;
        i++;
        n--;
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0])-1;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
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