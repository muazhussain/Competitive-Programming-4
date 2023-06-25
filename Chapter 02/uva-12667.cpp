// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=4405

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "debug.h"
#else
	#define out(...) 0
#endif

void solve() {
	int n, t, m;
	cin >> n >> t >> m;
	map<char, pair<int, int>> lastBlood;
	int scoreBoard[105][25] = {};
	while(m--) {
		int time, id;
		char problem;
		string verdict;	
		cin >> time >> id >> problem >> verdict;
		if(verdict == "Yes" && scoreBoard[id][(int) problem - 'A'] == 0) {
			lastBlood[problem] = {time, id};
			scoreBoard[id][(int) problem - 'A'] = 1;
		}
	}
	for(char ch = 'A'; ch < (char) 'A' + n; ++ch) {
		if(lastBlood.find(ch) != lastBlood.end()) {
			cout << ch << " " << lastBlood[ch].first << " " << lastBlood[ch].second << "\n";
		} else {
			cout << ch << " - -\n";
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