// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=4400

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "debug.h"
#else
	#define out(...) 0
#endif

void solve() {
	int n;
	cin >> n;
	vector<string> names(n);
	for(string& s : names) {
		cin >> s;
	}
	int query;
	cin >> query;
	while(query--) {
		int pos;
		cin >> pos;
		--pos;
		int left = 0, right = 0;
		if(names[pos] != "?") {
			cout << names[pos] << "\n";
			continue;
		}
		while(pos - left >= 0 && names[pos - left] == "?") {
			++left;
		}
		if(pos - left < 0) {
			left = 999;
		}
		while(pos + right < n && names[pos + right] == "?") {
			++right;
		}
		if(pos + right >= n) {
			right = 999;
		}
		if(left < right) {
			for(int i = 0; i < left; ++i) {
				cout << "right of ";
			}
			cout << names[pos - left] << "\n";
		} else if(right < left) {
			for(int i = 0; i < right; ++i) {
				cout << "left of ";
			}
			cout << names[pos + right] << "\n";
		} else if(left == right) {
			cout << "middle of " << names[pos - left] << " and " << names[pos + right] << "\n";
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