/*
Jay likes Prime number challenges very much, and his brother Veeru use to give him such challenges,
 but one day Veeru gave him a tricky challenge and now Jay is stuck on this challenge, he needs your 
 help to solve this challenge.

You are given a number now you have to find whether this number is divisible by any number other than itself or not.

If this number is divisible by a prime number then he has to find whether the number we get after dividing that number
 from that prime number has 2 or more unique prime factors or not.

If both conditions are met then print "Yes" otherwise "No".

Input Format
First-line contains a number T representing the number of test cases.
Next T lines contain the number n which is to be checked.
Output Format
T lines of results.

Constraints
1≤T≤1000
1≤n≤1010
Sample Input 1 
2
12
25
Sample Output 1 
Yes
No
Explanation
12 can be divided by prime number 2.
12/2 = 6 has 2 unique prime factors 2 and 3.*/
/* contest link https://www.codechef.com/rankings/LCDR2022 */
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
   int cnt=0;
   for(int i=2;i<=sqrt(n);i++)
   {
        if(n%i==0)
        {
            n/=i;
            break;
        }
   }
   set<ll>s;
   while(n%2==0)
   {
       s.in(2);
       n/=2;
   }
   for(int i=3;i<=sqrt(n);i+=2)
   {
        while(n%i==0)
        {
            s.in(i);
            n=n/i;
        }
   }
   if(n>2)
    s.in(n);
    
    
    if(s.size()>=2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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
