#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rohit 1
#define MOD1 998244353
#define inf 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mod 1000000007
#define mp make_pair
#define in insert
#define fc first
#define sc second
#define pi 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rp(i, a, n) for (int i = (a); i < (n); i++)
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
void init_code()
{
    fio
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
ll fact(ll n)
{
    if (n == 1)
        return 1;
    return fact(n - 1) * n;
}
bool cmppsf(const pair<int,pair<int,int>>&a,const pair<int,pair<int,int>>&b)
{
    return a.second.first<b.second.first;
}
bool cmppss(const pair<int,pair<int,int>>&a,const pair<int,pair<int,int>>&b)
{
    return a.second.second<b.second.second;
}
bool cmps(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.second<b.second;
}
bool cmpf(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.first<b.first;
}
void rotatel(vector<ll>&v,int k)
{
    int n=v.size();
    vector<ll>b(n);
    for(int i=0;i<n;i++)
    {
        if(i-k<0)
        {
            b[(i-k)%n+n]=v[i];
        }
        else
            b[(i-k)%n]=v[i];
    }
    v=b;
}
void solution()
{
    ll n,m;cin>>n>>m;
    int x1,y1;cin>>x1>>y1;
    int x2,y2;cin>>x2>>y2;
    int arr[n+1][m+1]={0};
    arr[x1][y1]=1;
    arr[x2][y2]=2;
    int d=0;
    d=abs(x2-x1)+abs(y2-y1);
    if(d&1)
    {
        ll diff=x1-1+y1-1; 
        if(diff%2==0)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                {
                    if(i&1)
                    {
                        if(j&1)
                            arr[i][j]=1;
                        else
                            arr[i][j]=2;
                    }
                    else
                    {
                        if(j&1)
                            arr[i][j]=2;
                        else
                            arr[i][j]=1;
                    }
                }
            }
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                {
                    if(i&1)
                    {
                        if(j&1)
                        arr[i][j]=2;
                        else
                        arr[i][j]=1;
                    }
                    
                    else
                    {
                        if(j&1)
                            arr[i][j]=1;
                        else
                            arr[i][j]=2;
                    }
                }
            }
        }
    }
    else
    {
        ll diff1=x1-1+y1-1;
        if(diff1%2==0)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                {
                if(i&1)
                {
                    if(j&1)
                    {
                    if(arr[i][j]!=2)
                    {
                        arr[i][j]=1;
                    }
                    }
                    else
                    {
                    if(arr[i][j]!=2)
                    {
                        arr[i][j]=3;
                    }
                    }

                }
                else
                {
                    if(j&1)
                    {
                    if(arr[i][j]!=2)
                    {
                        arr[i][j]=3;
                    }}
                    else
                    {
                    if(arr[i][j]!=2)
                    {
                        arr[i][j]=1;
                    }
                    }
                }
            }
            }
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                {
                if(i&1)
                {
                    if(j&1)
                    {
                    if(arr[i][j]!=2)
                    {
                        arr[i][j]=3;
                    }
                }
                else
                {
                    if(arr[i][j]!=2)
                    {
                        arr[i][j]=1;
                    }
                }

                }
                else
                {
                    if(j&1)
                    {
                    if(arr[i][j]!=2)
                    {
                        arr[i][j]=1;
                    }}
                    else
                    {
                    if(arr[i][j]!=2)
                    {
                        arr[i][j]=3;
                    }
                    }
                }
            }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}   



int main()
{
    init_code();
    int tt;cin>>tt;
    while(tt--)
        solution();
}