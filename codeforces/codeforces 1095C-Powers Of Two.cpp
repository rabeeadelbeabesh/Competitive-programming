#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	long long  n, k; cin >> n >> k;
	multiset<int, greater<int>>st;
	int p = 1;
	while (n>0){
		int c = p*(n % 2);
		if (c>0)
		st.insert(c);
		n /= 2;
		p *= 2;

	}
	if (sz(st) > k){
		cout << "NO" << endl; 
		return;

	}
	while (sz(st)!=k){
		int c = *st.begin();
		st.erase(st.begin());
		double z = (double)log2(c/2);
		if (z != (int)z)break;
		c = power(2, z);
		st.insert(c);
		st.insert(c);

	}
	if (sz(st) !=k){
		cout << "NO" << endl;
		return;

	}
	cout << "YES" << endl;
	for (auto a : st)cout << a << " ";
	cout  << endl;
}
int main() {
	run();
	
		solve();
}