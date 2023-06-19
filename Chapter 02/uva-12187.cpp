// https://onlinejudge.org/external/121/12187.pdf

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "debug.h"
#else
	#define out(...) 0
#endif

bool validCell(int x, int y, int r, int c) {
	return (x >= 0 && x < r && y >= 0 && y < c);
}

void solve() {
	int n, r, c, k;
	while(cin >> n >> r >> c >> k && (n | r | c | k)) {
		vector<vector<int>> county(r, vector<int>(c));
		for(int i = 0; i < r; ++i) {
			for(int j = 0; j < c; ++j) {
				cin >> county[i][j];
			}
		}
		vector<int> attack(n);
		for(int i = 0; i < n - 1; ++i) {
			attack[i] = i + 1;
		}
		while(k--) {
			vector<vector<int>> temp = county;
			int dx[] = {-1, 0, 0, 1};
			int dy[] = {0, -1, 1, 0};
			for(int i = 0; i < r; ++i) {
				for(int j = 0; j < c; ++j) {
					for(int m = 0; m < 4; ++m) {
						int x = i + dx[m];
						int y = j + dy[m];
						if(validCell(x, y, r, c) && county[x][y] == attack[county[i][j]]) {
							temp[x][y] = county[i][j];
						}
					}
				}
			}
			county = temp;
		}
		for(int i = 0; i < r; ++i) {
			cout << county[i][0];
			for(int j = 1; j < c; ++j) {
				cout << " " << county[i][j];
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