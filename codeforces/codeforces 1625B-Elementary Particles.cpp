#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	int n,x,l,r; cin >> n;
	map<int, vector<int>>mp;
	for (int i =1; i <=n; ++i){
		cin >> x;
		mp[x].push_back(i);
	}
	int ans = -1;
	for (auto a : mp){
		if (sz(a.second) == 0)continue;
		for (int k = 1; k <sz(a.second); ++k){
		
			l = min(a.second[k], a.second[k - 1]);
			r = min(n - a.second[k], n - a.second[k-1] );
			ans = max(ans, r + l );
		}
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