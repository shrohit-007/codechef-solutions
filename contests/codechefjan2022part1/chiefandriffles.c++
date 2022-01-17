#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

vector<int> nextPosition;

void decompose(int src, vector<bool>& visited, vector<int>& cycle) {
    if(visited[src]) return ;
    cycle.push_back(src);
    visited[src] = 1;
    decompose(nextPosition[src], visited, cycle);
}

void solve() {
    int N, K; cin >> N >> K;
    nextPosition.resize(N + 1);
    int index = 1;
    for(int i = 1; i <= N; i += 2) nextPosition[i] = index ++;
    for(int i = 2; i <= N; i += 2) nextPosition[i] = index ++;

    vector<bool> visited(N + 1, 0);
    vector<int> ans(N + 1, 0);
    for(int i = 1; i <= N; i ++) {
        if(visited[i] == 0) {
            vector<int> cycle;
            decompose(i, visited, cycle);
            int cycleLength = cycle.size();
            for(int j = 0; j < cycleLength; j ++) {
                ans[cycle[(j + K) % cycleLength]] = cycle[j];
            }
        }
    }
    for(int i = 1; i <= N; i ++) cout << ans[i] << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    cin >> T;
    while(T --) {
        solve();
    }
}