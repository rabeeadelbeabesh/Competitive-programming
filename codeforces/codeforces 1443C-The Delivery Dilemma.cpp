#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	int n; cin >> n;
	long long total = 0, pre = 0, ans = 0;
	vector<pair<long long, long long >>a(n);
	for (int i = 0; i < n; ++i)cin >> a[i].first;
	for (int i = 0; i < n; ++i)cin >> a[i].second, total+=a[i].second;
	sort(a.begin(), a.end());

	ans = total;
	for (int i = 0; i < n; ++i){
		pre += a[i].second;
		ans = min(ans, max(a[i].first, total - pre));  
	}
	cout << ans << endl;
}
int main() {
	run();
	int t; cin >> t;
	while (t--){
		solve();
	
	}
}