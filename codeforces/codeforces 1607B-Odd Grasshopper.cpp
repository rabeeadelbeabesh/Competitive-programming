#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	long long x, n,c;
	cin >> x >> n;

	c = n / 4;
	c *= 4;
	for (int i = 1; i <= (n % 4); ++i){
			if (x & 1) x += (c + i);
			else x -= (c + i);
	}
	cout << x << endl;



}


int main() {
	run();
		int t; cin >> t;
	while (t--){

	solve();

		}
}