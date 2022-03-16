#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
long long gcd(long long  x, long long  y) { return (!y) ? x : gcd(y, x%y); }

void solve() {
	long long n; cin >> n;

	for (int i = 2; i <= n; ++i){
		int cur = n - i-1;
		if (gcd(cur, i) == 1){
			cout << cur << " " << i << " " << 1 << endl;
			return;
		}
	}
}

int main() {
	int t; cin >> t;
	while (t--){
		solve();
	}
}