#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
long long gcd(long long  x, long long y) { return (!y) ? x : gcd(y, x%y); }
void solve() {
	int n; cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)cin >> v[i];
	int Gcd = v[0];
	for (auto a : v) Gcd = gcd(Gcd, a);
	sort(v.begin(), v.end());
	int cnt = v[n - 1]/Gcd - n;
	if (cnt & 1)cout << "Alice" << endl;
	else cout << "Bob" << endl;

	
}

int main() {
	solve();
}