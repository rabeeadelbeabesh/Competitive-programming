#include<bits/stdc++.h>
using namespace std;
#define endl  '\n'  
const int dx[] = { -1, 0, 0, 1, -1, 1, 1, -1 };
const int dy[] = { 0, -1, 1, 0, 1, 1, -1, -1 };
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
vector<vector<char>>v;
int n;
bool check(int x, int y,char ch){
	for (int i = 0; i < 4; ++i){
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx >= 0 && xx<n&&yy>=0 && yy < n &&v[xx][yy] == ch) return false;
	}
	return true;
}
void solve() {
	 cin >> n;
    v.resize(n, vector<char>(n));
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			cin >> v[i][j];
		}
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			if (v[i][j] != '.')continue;
			for (int k = 0; k < 26; ++k){
				if (check(i, j, 'A' + k)){
					v[i][j] = 'A' + k;
					break;
				}
			}
			
		}
	}

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			cout << v[i][j];
		}
		cout << endl;
	}

}
int main() {
	run();
	int t; cin >> t;
	for (int k = 1; k <= t; ++k){
		cout << "Case " << k << ":" << endl;
		solve();
	}

	
}