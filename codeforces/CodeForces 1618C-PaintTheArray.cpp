#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void solve() {
	
	int n; cin >> n;
	vector<long long>v(n);
	for (auto &it : v)cin >> it;
	long long g =0;
	int f = 1;
	for (int i = 0; i < n; i += 2) g = gcd(g, v[i]);
	for (int i = 1; i < n; i += 2){
		if (v[i] % g==0) {
			f = 0;
		}
	}
	if (f==1){
		cout << g << endl;
		return;
	}
	f = 1;
	g =0;
	for (int i = 1; i < n; i += 2) g = gcd(g, v[i]);
	for (int i = 0; i < n; i += 2){
		if (v[i] % g == 0) {
			f = 0;
			
		}
	}
	cout << (f == 1 ? g : 0) << endl;
	

}

int main() {
	int t; cin >> t;
	while (t--){
		solve();
	}
}