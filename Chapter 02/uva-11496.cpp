// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2491

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "debug.h"
#else
	#define out(...) 0
#endif

void solve() {
	int n;
	while(cin >> n && n > 1) {
		vector<int> ar(n);
		for(int& e : ar) {
			cin >> e;
		}
		int res = 0;
		int cur = ar[0];
		for(int i = 1; i < n - 1; ++i) {
			if((ar[i - 1] > ar[i] && ar[i + 1] > ar[i]) || (ar[i - 1] < ar[i] && ar[i + 1] < ar[i])) {
				++res;
			}
		}
		if((ar[n - 1] > ar[0] && ar[1] > ar[0])|| (ar[n - 1] < ar[0] && ar[1] < ar[0])) {
			++res;
		}
		if((ar[n - 2] > ar[n - 1] && ar[0] > ar[n - 1]) || (ar[n - 2] < ar[n - 1] && ar[0] < ar[n - 1])) {
			++res;
		}
		cout << res << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T = 1;
	// cin >> T;
	while(T--) {
		solve();
	}
	return 0;
}