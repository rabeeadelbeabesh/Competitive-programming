#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void solve(){

	int n; cin >> n;
	vector<int>v(n);
	for (auto &a : v) cin >> a;

	sort(v.begin(), v.end());
	int mx = v[0];
	for (int i = 1; i < n; i++){
		mx = max(mx,v[i] - v[i - 1]);
	}
	cout << mx << endl;

}


int main() {
	run();
	int t; cin >> t;
	while (t--){

		solve();

	}
}