/*
Harry Potter traveled from Muggle World to Hogwarts to attend a fair. It is a lovely event with magical
 stalls selling food items from different worlds. Harry is really hungry and he is provided with wizard coupons
  by Professor Dumbledore. A single coupon can be used to buy a single item from the stall. There are N magical 
  stalls in a line (numbered 1 to N). Initially, the stalls are guarded by Gringotts Guards, and Harry needs to give 
  coupons to them. For each valid i, the i-th box has a maximum stock of edibles Si. harry can perform the following 
  purchase any number of times: choose an integer L (1≤L≤N) and put give coupon to each of the stall 1,2,…,L. Harry wants 
  to put as many coupons as possible to the stalls in total (the distribution of coupons in the boxes does not matter). Of 
  course, it is not possible to make a purchase that would result in the number of coupons in stalls exceeding its stock. 
  Can you help Harry calculate the maximum number of Wizard Coupons that can be given to these stalls?

Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of Ttest cases follows:
The first line of each test case contains a single integer N.
The second line contains N space-separated integers S1,S2,S3,...,SN (each integer representing the stock available in each stall).
Output Format
For each test case, print a single line containing one integer - the maximum number of tokens.

Constraints
1≤T≤10
1≤N≤105
1≤S1,S2,S3,...,SN≤105
Sample Input 1 
1
3
2 1 3
Sample Output 1 
4*/
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
void solution()
{
   ll n;cin>>n;
   vector<int>v;
   vector<int>mn;
   for(int i=0;i<n;i++)
   {
    int a;cin>>a;
    v.pb(a);
   }
   int mnv=INT_MAX;
   for(int i=0;i<n;i++)
   {
        if(mnv>v[i])
            mnv=v[i];
        mn.pb(mnv);
   }
   ll sum=0;
   for(auto &it:mn)
    sum+=it;
    
    cout<<sum<<endl;

}

int main()
{
    init_code();
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        solution();
    }
    return 0;
}
