#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	int n, l, r, x; cin >> n >> l >> r >> x;
	vector<int>v(n);
	for (auto &it : v)cin >> it;
	int mn, mx, sum, ans = 0;;
	for (int i = 0; i < (1<< n); ++i){
		mn = INT_MAX, mx = 0, sum = 0;
		for (int j = 0; j < n; ++j){
		
			if (i&(1 << j)){
				//cout << i<< endl;
				sum += v[j];
				mn = min(mn, v[j]);
				mx = max(mx, v[j]);
			}
		}

		if (sum >= l&&sum <= r&&mx - mn >= x){
			ans++;
		}

	}
	cout << ans << endl;

}
int main() {
	 run();
	 solve();

}