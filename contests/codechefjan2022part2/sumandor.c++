#include <bits/stdc++.h>
using namespace std;

vector<long long int> pow_2_vec; 
bool check(int m, int sum) {
	for(auto it: pow_2_vec) {
		sum -= min((sum/it), m * 1LL) * it;
	}
	return sum == 0;
}
int main() {
	// your code goes here
	int t; cin >> t;
	while (t--) {
		int x, s;
		cin >> x >> s;
		long long int pow_2 = 1, mx = 0;
		pow_2_vec.clear();
		int temp_x = x;
		while(x) {
			if(x&1) {
				pow_2_vec.push_back(pow_2);
				mx = pow_2;
			}
			x /= 2;
			pow_2 *= 2;
		}
		x = temp_x;
		sort(pow_2_vec.rbegin(), pow_2_vec.rend());
		if(x > s) cout << -1 << endl;
		else if(x == s) cout << 1 << endl;
		else {
			s -= x;
			int l = 1, r = s, m;
			bool ok = false;
			while(l <= r) {
				m = (l+r)/2;
				ok = check(m, s);
				if(ok && (m == 1 || !check(m-1, s))) {
					break;
				} else if(ok) r = m - 1;
				else l = m + 1;
				
			}
			if(ok) cout << m + 1 << endl;
			else cout << -1 << endl;
		}
	}
	return 0;
}