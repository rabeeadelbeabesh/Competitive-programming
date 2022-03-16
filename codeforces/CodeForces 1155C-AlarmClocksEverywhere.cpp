#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
long long gcd(long long x, long long y) { return (!y) ? x : gcd(y, x%y); }
void solve() {
	long long n, m; cin >> n >> m;

	long long x, str, y; cin >> x;
	str = x;
	long long g = 0;
	for (int i = 1; i < n; ++i){
		cin >> y;
		g = gcd(g, y - x);
		x = y;
	}


	long long  p;
	for (int i = 0; i < m; ++i){
		cin >> p;
		if (g%p == 0){
			cout << "YES" << endl;
			cout << str << " " << i + 1 << endl;
			return;
		}

	}


	cout << "NO" << endl;


}

int main() {
	solve();
}