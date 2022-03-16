#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void solve() {
	int n; cin >> n;
	long long x, y, c;
	long long oo = 1e18;
	long long mn, mx, cost_mn, cost_mx,tota_cost;
	mn = 1e9l, mx = -1;
	for (int i = 0; i < n; ++i){
		
		 cin >> x >> y>>c;
		if (x < mn) {
			mn = x;
			cost_mn = tota_cost =oo;
		}
		if (y> mx) {
			mx = y;
			cost_mx = tota_cost = oo;
		}
		if (y == mx) {
			cost_mx = min(c, cost_mx);
		}
		if (x == mn) {
			cost_mn = min(c, cost_mn);
		}

		if (mn == x&&y == mx){
			tota_cost = min(tota_cost, c);
		}

		cout << min(cost_mx + cost_mn, tota_cost) <<endl;
	}
}

int main() {
	
	  run();
	int t; cin >>t;
	while (t--){
	
	    solve();
	
  }
}