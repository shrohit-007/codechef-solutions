#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
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
        ll y=n&(n-1);
        ll z=n&(n+1);
        ll k=(n+1)&(n+2);
        ull ans=0;
        if(n==1)
            ans+=0;
        else if(y==0)
        {
            ans+=2*(2*n-1);
            ans+=(n-2)*(n-1);
        }
        else if(z==0)
        {
            ans+=(n-1)*(n);
        }
        else if(k==0)
        {
            ans+=n*(n+1);
        }
        else
        {
            while(n>1)
            {
            int tmp=n;
            int cnt=0;
            while(tmp>0)
            {
                cnt++;tmp>>=1;
            }
            ll num=pow(2,cnt)-2;
            ans+=((n-(num-n))*(num+1));
            n-=(n-(num-n));
           // cout<<n<<" "<<ans<<endl;
         y=n&(n-1);
         z=n&(n+1);
         k=(n+1)&(n+2);
        if(n==1)
            {
                ans+=0;
                break;
            }
        else if(y==0)
        {
            ans+= 2*(n^(n-1));
            ans+=(n-2)*(n-1);
            break;
        }
        else if(z==0)
        {
            ans+=(n-1)*(n);
            break;
        }
        else if(k==0)
        {
            ans+=n*(n+1);
            break;
        }

        }}
        cout<<ans<<endl;

    }

    int main() {
        init_code();
        int tt = 1;
        cin >> tt;
        while (tt--)
        {
            solution();
        }
    }
