/*
Ari is an engineering student and lives in a hostel which has n rooms. The rooms numbers are from 1 to n but
 are arranged in a weird way. Firstly all odd integers from 1 to n (in ascending order), then all even integers 
 from 1 to n (also in ascending order). Suppose your friend's room number is at position k, now its your task to 
 find out the room number.

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains integers n and k.
Output Format
For each testcase, print the room number of your friend that will stand at the position number k.

Constraints
1≤T≤1000
2≤n≤109
2≤k≤109
Sample Input 1 
2
10 3
7 7
Sample Output 1 
5
6
Explanation
In the first case : {1, 3, 5, 7, 9, 2, 4, 6, 8, 10}. The third position in the sequence is therefore occupied by the room 
number 5 In the first case : {1, 3, 5, 7, 2, 4, 6}. The seventh position in the sequence is therefore occupied by the room number 6.*/
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
    ll n,k;cin>>n>>k;
    if(2*k-1<=n)
        cout<<2*k-1<<endl;
    else
    {
        if(n&1)
        {
            k-=(n/2+1);
            cout<<k*2<<endl;
        }
        else
        {
            k-=n/2;
            cout<<k*2<<endl;
        }
    }

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
