#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	
	int n; cin >> n;
	vector<int>v(n),vv;
	for (auto &it : v)cin >> it;
	multiset<int, greater<int>>st;
	bool f = (v[0] > 0) ? 1 : 0;
	int j = 0;long long  ans = 0;
	for (int i = 0; i < n; ++i){
		bool f = 0;
		while (j<n && (v[j]>0 && v[i]<0) || (v[j]<0 && v[i]>0)){
			if (f == 0){
				ans += *st.begin();
				f = 1;
			}
			vv.push_back(*st.begin());
			st.erase(st.begin());
			j++;
		}
		st.insert(v[i]);

	}
	f = 0;
	while (sz(st)>0){
		if (f == 0){
			ans += *st.begin();
			f = 1;
		}
		vv.push_back(*st.begin());
		st.erase(st.begin());

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