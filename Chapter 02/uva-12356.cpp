// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3778

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "debug.h"
#else
	#define out(...) 0
#endif

void solve() {
	int S, B;
	while(cin >> S >> B && (S | B)) {
		vector<int> L(S + 2), R(S + 1);
		for(int i = 1; i <= S; ++i) {
			L[i] = i - 1;
			R[i] = i + 1;
		}
		while(B--) {
			int f, t;
			cin >> f >> t;
			if(L[f] <= 0) {
				cout << "* ";
			} else {
				cout << L[f] << " ";
			}
			if(R[t] > S) {
				cout << "*\n";
			} else {
				cout << R[t] << "\n";
			}
			R[L[f]] = R[t];
			L[R[t]] = L[f];
		}
		cout << "-\n";
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