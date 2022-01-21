#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int R[n], Lf[n], Rf[n],res[n];
        Lf[1] = 0, Rf[1] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> R[i];
        }
        int count = 0, count1 = 0, cnt2 = 0;
        for (int i = 2; i <= n; i++)
        {
                if (R[i - 1] == 1)
                    count = i - 1;
                if (R[i] != 0)
                {
                    Lf[i] = 0;
                }
                else
                {
                    if (count == 0)
                        Lf[i] = -1;
                    else
                        Lf[i] = i - count;
                }
            

            if (R[n - i + 2] == 2)
              {  count1 = i-1;
                  cnt2++;
              }
            
            if (R[n + 2 - i] != 0)
                Rf[n + 2 - i] = 0;

            else
            {
                if (count1 == 0)
                    Rf[n + 2 - i] = -1;
                else
                    Rf[n + 2 - i] = i-count1-1;
            }

            if (cnt2 == 0 && R[n+2-i]==0)
                Rf[n + 2 - i] = -1;
        }
        for (int j = 1; j <= n; j++)
        {
            if(Rf[j]==-1 || Lf[j]==-1)
            res[j]=max(Rf[j],Lf[j]);
            else
            res[j]=min(Rf[j],Lf[j]);
        }
        for(int i=1;i<=m;i++)
        {
            int a;cin>>a;
            cout<<res[a]<<" ";
        }cout<<endl;
            
    } 
    return 0;
}