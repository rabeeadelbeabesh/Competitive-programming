#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	int  n = 11,k;
	vector<int>v(n),vv;

	for (auto &it : v)cin >> it;
	cin >> k;
	int sum = 0,mx=0;
	map<int, set<vector<int>>>mp;
	for (int i = 0; i<(1 <<n); ++i){
		sum = 0;
		vv.clear();
		for (int j = 0; j < n; ++j){
			if (i&(1 << j)){
				sum += v[j];
				vv.push_back(j);
			} 
			
		}
		if (sz(vv) == k){
			mp[sum].insert(vv);
			mx = max(mx, sum);
		}
	}

		cout << sz(mp[mx])<< endl;;


}

int main() {
	run();
	int t; cin >>t;
	while (t--){
	
	    solve();
	
  }
}