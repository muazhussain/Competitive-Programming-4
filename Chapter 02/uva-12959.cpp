// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=4838

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "debug.h"
#else
	#define out(...) 0
#endif

void solve() {
	int J, R;
	while(cin >> J >> R) {
		vector<int> score(J), last(J);
		for(int i = 0; i < R; ++i) {
			for(int j = 0; j < J; ++j) {
				int x;
				cin >> x;
				score[j] += x;
				last[j] = x;
			}
		}
		int res = 0;
		for(int i = 1; i < J; ++i) {
			if(score[i] > score[res] || (score[i] == score[res] && last[i] >= last[res])) {
				res = i;
			}
		}
		cout << res + 1 << "\n";
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