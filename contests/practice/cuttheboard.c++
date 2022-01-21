#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;//we have to just cut the board in such a way that it is not cut into two or more pieces.
        cout<<(n-1)*(m-1)<<endl;
    }
}