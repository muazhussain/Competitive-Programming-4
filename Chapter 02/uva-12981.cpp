// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=4864

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "debug.h"
#else
	#define out(...) 0
#endif

void solve() {
	int a, b, c, d;
	int A, B, C, D;
	cin >> a >> b >> c >> d >> A >> B >> C >> D;
	if(a == A && b == B && c == C && d == D) {
		cout << "POSSIBLE\n";
	} else if(a == C && b == A && c == D && d == B) {
		cout << "POSSIBLE\n";
	} else if(a == D && b == C && c == B && d == A) {
		cout << "POSSIBLE\n";
	} else if(a == B && b == D && c == A && d == C) {
		cout << "POSSIBLE\n";
	} else {
		cout << "IMPOSSIBLE\n";
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T = 1, cs = 1;
	cin >> T;
	while(T--) {
		cout << "Case #" << cs++ << ": "; 
		solve();
	}
	return 0;
}