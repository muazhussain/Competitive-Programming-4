// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1919

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "debug.h"
#else
	#define out(...) 0
#endif

void solve() {
	int N;
	while(cin >> N && N) {
		vector<pair<string, string>> inp(N);
		for(auto& p : inp) {
			cin >> p.first >> p.second;
		}
		vector<string> res(N, "X");
		vector<bool> available(N, true);
		int idx = -1;
		for(auto p : inp) {
			int cnt = p.second.size();
			while(cnt) {
				idx = (idx + 1) % N;
				if(available[idx]) {
					--cnt;
				}
			}
			res[idx] = p.first;
			available[idx] = false;
		}
		cout << res[0];
		for(int i = 1; i < N; ++i) {
			cout << " " << res[i];
		}
		cout << "\n";
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