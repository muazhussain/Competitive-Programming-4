//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=4946

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "debug.h"
#else
	#define out(...) 0
#endif

void solve() {
    string road;
    cin >> road;
    vector<bool> mark(road.size(), 1);
    for(int i = 0; i < road.size(); i++) {
        if(road[i] == 'D') {
            mark[i] = 0;
        } else if(road[i] == 'B') {
            mark[i] = 0;
            if(i - 1 >= 0) mark[i - 1] = 0;
            if(i - 2 >= 0) mark[i - 2] = 0;
        } else if(road[i] == 'S') {
            mark[i] = 0;
            if(i - 1 >= 0) mark[i - 1] = 0;
            if(i + 1 < road.size()) mark[i + 1] = 0;
        }
    }
    int res = 0;
    for(bool b : mark) {
        res += (int) b;
    }
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T;
    cin >> T;
    for(int cs = 1; cs <= T; cs++) {
        cout << "Case " << cs << ": ";
        solve();
    }
    return 0;
}