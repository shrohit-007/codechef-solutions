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

#define MAX 100000
int multiply(int x, int res[], int res_size) {
int carry = 0;
for (int i = 0; i < res_size; i++) {
    int prod = res[i] * x + carry;
        res[i] = prod % 10;
    carry = prod / 10;
}
while (carry) {
    res[res_size] = carry % 10;
    carry = carry / 10;
    res_size++;
}
return res_size;
}
string  power(int x, int n)
{
    string st="";
if(n == 0 ){
    st+='1';
    return st;
}
int res[MAX];
int res_size = 0;
int temp = x;
while (temp != 0) {
    res[res_size++] = temp % 10;
    temp = temp / 10;
}
for (int i = 2; i <= n; i++)
    res_size = multiply(x, res, res_size);
for (int i = res_size - 1; i >= 0; i--)
    st+=char(res[i]+'0');
return st;
}
string divider(string number, int divisor) {
   string result;
   int index = 0;
   int dividend = number[index] - '0';
   while (dividend < divisor) {
      dividend = dividend * 10 + (number[++index] - '0');
   }
   while (number.size() > index) {
      result += (dividend / divisor) + '0';
      dividend = (dividend % divisor) * 10 + number[++index] - '0';
   }
   if (result.length() == 0) {
      return "0";
   }
   return result;
}
void solution()
{
    ll x,m;cin>>x>>m;
    int cnt=0;
    ll tmp=x;
    while(x>0)
    {
        cnt++;
        x>>=1;
    }
    if(!(tmp&(tmp-1)))
    {
        cnt=cnt;
    }
    else
        cnt=cnt+1;
    if(m<cnt)
        cout<<"0"<<endl;
    else
    cout<<(m-cnt+1)<<endl;
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
