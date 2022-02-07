/*Rohan and your friend had given a task of making a integer larger by swapping the adjacent digits of 
the integer n. It is given that the integer is positive and without leading zeroes. You can swap the operation 
at most k times Help your friend to solve this task!!

Input Format
The First line of the input contains T testcases.
The Next line line contains two integers n and k.
Output Format
For each testcase, Print the maximum number after at most k swaps.

Constraints
1≤T≤1000
1≤n≤109
0≤k≤1000
Sample Input 1 
2
1034 2
115 0
Sample Output 1 
3104
115*/
#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
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
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first==b.first)
        return a.second>b.second;
    return a.first<b.first;
}
void solution()
{
    ll n,k;
    cin>>n>>k;
    vector<int>v;
    while(n>0)
    {
        v.pb(n%10);
        n/=10;
    }
    int sz=v.size();
    for(int i=0;i<sz/2;i++)
    {
        swap(v[i],v[sz-1-i]);
    }
    debug(v)
    for(int i=0;i<sz;i++)
    {
        vector<pair<int,int>>v1;
        for(int j=i+1;j<sz;j++)
        {
            v1.pb({v[j],j});
        }
        sort(v1.begin(),v1.end(),cmp);
        int flag=0;
        for(int j=v1.size()-1;j>=0;j--)
        {
            if(v1[j].first>v[i])
            {
                if(k>=(v1[j].second-i))
                {
                    auto it=find(v.begin()+i,v.end(),v1[j].first);
                    if(it==v.end())
                        continue;
                    v.erase(it);
                    v.insert(v.begin()+i,v1[j].first);
                    //cout<<k<<endl;
                    k-=(v1[j].second-i);
                    //cout<<k<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(k<=0)
            break;
    }
    for(auto &it:v)
        cout<<it;
    cout<<endl;
}

int main()
{
    init_code();
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solution();
    }
    return 0;
}
