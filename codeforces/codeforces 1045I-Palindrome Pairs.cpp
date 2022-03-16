#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void solve(){
	int n; cin >> n;

	long long  ans = 0;
	map<long long, long long>mp;
	for (int i = 0; i < n; ++i){
		long long  mask = 0;
		string s; cin >> s;
		for (auto a : s){
			int k = a - 'a';
			mask ^=  (1 << k);
		}
		ans += mp[mask];

		for (long long bt = 0; bt < 26; bt++){
			mask ^=(1 << bt);
			ans += mp[mask];
			mask ^= (1 << bt);
		}
		++mp[mask];
	}


	cout << ans << endl;

}


int main() {
	run();
	solve();
}