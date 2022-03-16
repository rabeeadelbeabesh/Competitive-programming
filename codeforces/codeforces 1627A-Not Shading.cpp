#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void solve(){

	int n, m, c, r; cin >> n >> m >> r >> c;
	vector<vector<char>>v(n + 1, vector<char>(m + 1));
	bool f = 1;
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <=m; ++j){
			cin >> v[i][j];
			if (v[i][j] == 'B')f = 0;
		}
	}
	if (f){
		cout << "-1" << endl;
		return;
	}
	f = 1;
	if (v[r][c] == 'B'){
		cout << "0" << endl;
		return;
	}
	for (int i = 1; i <= m; ++i) if (v[r][i] == 'B')f = 0;
	for (int i = 1; i <= n; ++i) if (v[i][c] == 'B')f = 0;
	if (f){
		cout << "2" << endl;
	}
	else cout << "1" << endl;
}
int main() {
	run();
	int t; cin >> t;while (t--)
		solve();
}