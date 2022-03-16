#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	int n, m; cin >>n >> m;
	vector<vector<int>>v(n+1, vector<int>(m+1)), vv(n+1, vector<int>(m+1,1));
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= m; ++j){
			cin >> v[i][j];

		}
	}
	for (int i = 1; i <=n; ++i){
		for (int j = 1; j <=m; ++j){
			if (v[i][j] == 0){
				for (int a = 1; a <= m; ++a)vv[i][a] = 0;
				for (int a = 1; a <= n; ++a)vv[a][j] = 0;
			}
		}
	}

	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= m; ++j){
			if (v[i][j] == 1){
				bool f = 1;
				for (int a = 1; a <= m; ++a)if (vv[i][a] ==1)f = 0;;
				for (int a = 1; a <= n; ++a)if (vv[a][j] == 1)f = 0;;
				if (f){
					cout << "NO" << endl;
					return;
				}
			}
		}
	}
	cout << "YES" << endl;
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= m; ++j){
			cout << vv[i][j] << " ";
		}
		cout << endl;
	}

}
int main() {
	  run();
	  solve();
	
	
}