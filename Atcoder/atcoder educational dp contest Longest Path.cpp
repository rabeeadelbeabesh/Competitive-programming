#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N =1e5+ 9;
int D[N];
int n, m;
vector<int>G[N];
int dfs(int node) {
	int &ret = D[node];
	if (~ret) return D[node];
	ret = 0;
	for (int ch : G[node]) {
		ret = max(ret, dfs(ch) + 1);
	}
	return ret;
}
void RunCase() {
	cin >> n >> m;
	mem(D, -1);
	for (int i = 0; i < m; ++i) {
		int x, y; cin >> x >> y;
		G[x].push_back(y);
	}
	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		ans = max(ans, dfs(i));
	
	}
	cout << ans << endl;
}
int main() {

	run();
	RunCase();
}