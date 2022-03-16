#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const long long mod = 1e9 + 7;
void solve(){
	long long a, b; cin >> a >> b;
	a %= mod;
	long long ans = 1;
	for (int i = 0; i < b; ++i){
		ans *=a ;
		ans %= mod;
	}

	cout << ans %mod << endl;
}


int main() {
	run();
	int t; cin >> t;
	while (t--){

		solve();

	}
}
