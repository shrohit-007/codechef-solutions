/*
Valorant India qualifiers are going on for the world championship and there are 3 teams in India who have the ability to qualify. The three teams are Global Esports (GE), Velocity Gaming (VLT), and Enigma Gaming (EG).

Now they are going to play a match against each other and the team who will be 1st will qualify, team which will come 2nd will go to the wildcard round and the last team will be disqualified.

Matches will take place in this order:

1st match GE vs VLT
2nd match VLT vs EG
3rd match EG vs GE
You are given the winner of all three matches in a single line separated by spaces. Print the team which will get disqualified. In case there is no conclusion print DRAW.

Input Format
A single line containing the winner of all three matches separated by spaces.

Output Format
Team which will not qualify. print DRAW in case of no conclusion.

Sample Input 1 
VLT VLT GE
Sample Output 1 
EG
*/
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
    
    string x,y,z;cin>>x>>y>>z;
    vector<string>v;
    int a=0,b=0,c=0;
    v.pb("VLT");
    v.pb("EG");
    v.pb("GE");
    for(int i=0;i<3;i++)
    {
        if(x==v[i])
        {
            if(i==0)
                a=1;
            else if(i==1)
                b=1;
            else
                c=1;
        }
    }
    for(int i=0;i<3;i++)
    {
        if(y==v[i])
        {
            if(i==0)
                a=1;
            else if(i==1)
                b=1;
            else
                c=1;
        }
    }
    for(int i=0;i<3;i++)
    {
        if(z==v[i])
        {
            if(i==0)
                a=1;
            else if(i==1)
                b=1;
            else
                c=1;
        }
    }
    if(a==0)
    {
        cout<<"VLT"<<endl;
    }
    else if(b==0)
        cout<<"EG"<<endl;
    else if(c==0)
        cout<<"GE"<<endl;
    else
        cout<<"DRAW"<<endl;
    

}

int main()
{
    init_code();

        //show_testcase(i);
        solution();
    
    return 0;
}
