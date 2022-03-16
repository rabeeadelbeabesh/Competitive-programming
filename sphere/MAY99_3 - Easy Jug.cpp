#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
long long gcd(long long x, long long y) { return (!y) ? x : gcd(y, x%y); }
void run() {

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	
		long long x, y, z;
		cin >> x >> y >> z;
		if (z > x&&z > y) {
			cout << "NO" << endl;
			return;
		}

		long long c1 = gcd(x, y);
		if (z%c1==0){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;


}

int main() {

	run();
	int t; cin >> t;
	while (t--){
		solve();
	}
}