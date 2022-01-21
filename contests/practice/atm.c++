#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    float y;
    cin>>x>>y;
    if((x%5==0) && (x+0.5<y))
    cout<<y-x-0.5;
    else
    cout<<fixed<<setprecision(2)<<y;
    return 0;
    
}
