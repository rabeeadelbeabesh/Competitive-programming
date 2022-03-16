#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void solve() {
	int n ,k; cin >> n>>k;
	vector<long long >v(n);
	for (auto &it : v)cin >> it;
	sort(v.begin(), v.end());
	long long len = k;
	long long ans = 0;
	for (int i = n-1; i>=0; --i){
		if (k>0){
			ans += (v[i - len]/v[i]) ;
			v[i - len] = 0;
			k -= 1;
		}
		else ans += v[i];
	}
	cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while (t--){
		solve();
	}
}