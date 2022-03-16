#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	long long x, k; cin >>x >> k;
	long long f = x / k, ff = ((x + k - 1) / k);
	for (int i = 0; ; i++){
		long long q = (x - i*f) / ff;

		if (x == i*f + q*ff){
			cout << i << " " << q << endl;
			return;
		}
	}

}
int main() {
	run();
	int t; cin >> t;
	while (t--){ 
		solve();
	}
	
}