// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3302

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "debug.h"
#else
	#define out(...) 0
#endif

void solve() {
	int n;
	while(cin >> n && n) {
		vector<pair<int, int>> ar(n);
		for(auto& p : ar) {
			cin >> p.first >> p.second;
		}
		vector<int> ans(n + 1, -1);
		bool impossible = false;
		for(int i = 1; i <= n; ++i) {
			int relPos = ar[i - 1].second;
			if(i + relPos > n || i + relPos < 1 || ans[i + relPos] != -1) {
				impossible = true;
				break;
			} else {
				ans[i + relPos] = ar[i - 1].first;
			}
		}
		if(impossible) {
			cout << "-1\n";
		} else {
			cout << ans[1];
			for(int i = 2; i <= n; ++i) {
				cout << " " << ans[i];
			}
			cout << "\n";
		}
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


/*
	Idea: When the relative position is negative, it implies the car was that much ahead in the starting grid. When the relative position is positive, it implies the car was that much behind the starting 	grid. Otherwise, the car was in its current position. If the calculated position already contains a car, then it would be impossible to construct the starting grid.

	** The relative position can be some absurd number; in that case, it will be impossible to construct the starting grid.
*/
