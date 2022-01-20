#include <bits/stdc++.h>
#define mod 1000000000 + 7
#define ll long long
#define rep for (int i = 0; i < n; i++)
using namespace std;
bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{     
      if((a.first.second-a.first.first)==(b.first.second-b.first.first))
      return a.first.second<b.first.second;
      return (a.first.second-a.first.first)<(b.first.second-b.first.first);

}
bool cmp1(pair<pair<int,int>,int>a,pair<pair<int,int>,int>b)
{   
    if(a.first.second==b.first.second)
    return a.first.first<b.first.first;
    return a.first.second<b.first.second;
}
bool cmp2(pair<pair<int,int>,int>a,pair<pair<int,int>,int>b)
{   
    if(a.first.first==b.first.first)
    return a.first.second<b.first.second;
    return a.first.first<b.first.first;
}
void solve()
{
    int n;
    cin >> n;
    int a[n], t[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> t[i];
    vector<pair<pair<int, int>, int>> v;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= t[i])
            v.push_back(make_pair(make_pair(a[i], t[i]), i + 1));
        else
            cnt++;
    }
    if (cnt == n)
        cout << "0"
             << "\n";
    else
    {
        for (int i = 1; i < n; i++)
        {
            cmp(v[i-1], v[i]);
        }
        sort(v.begin(), v.end(), cmp);
        int z=v[v.size()-1].first.second,s=v.size();
        vector<pair<pair<int,int>,int>>v1;
        int h=0;
        for(int i=0;i<s;i++)
        {  
            if(v[h].first.second>z)
            {   
                v1.push_back(make_pair(make_pair(v[i].first.first,v[i].first.second),v[i].second));
                v.erase(v.begin()+h);
                h--;
            }
            h++;
        }
        sort(v.begin(),v.end(),cmp2);
       if(!v1.empty()){
         sort(v1.begin(),v1.end(),cmp1);
         v.insert(v.end(),v1.begin(),v1.end());
       }
        int k = v[0].first.first;
        int sze=v.size();
        int g=0;
        for (int i = 1; i <= sze; i++)
        {
            if (k > v[g].first.second)
            {  
                k-=v[g].first.first;
                v.erase(v.begin() + g);
                g--;
            }
            g++;
            k += v[g].first.first;
        }
        cout << v.size() << "\n";
        int temp = 0, x = v[0].first.first;
        for (int i = 1; i <=v.size(); i++)
        {
            cout << v[i - 1].second << " " << temp << " " << x << "\n";
            temp=x;
            x += v[i].first.first;
        }
    }
}
int main()
{
    int q;
    cin >> q;
    while (q--)
        solve();
}