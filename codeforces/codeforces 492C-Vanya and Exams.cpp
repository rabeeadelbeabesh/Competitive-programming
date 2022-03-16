#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	long long n, r, avg,sm=0; cin >> n >> r >> avg;
	vector<pair<int, int>>v(n);
	for (int i = 0; i < n; ++i){
		cin >> v[i].second >> v[i].first;
		sm += v[i].second;
	}
	sort(v.begin(), v.end());
	long long ans = 0, need = avg*n - sm;
	for (int i = 0; i < n&&need>0; ++i){
		if (v[i].second >= r)continue;
		ans += min(r - v[i].second, need)*v[i].first;
		need -= min(r - v[i].second, need);
	}
	cout << ans <<endl;
}
int main() {
	run();
	solve();
	
}