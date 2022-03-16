#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const  int N = 1009;
vector<int>lpf(N);
void clc_sieve(){

	for (int i = 0; i < N; ++i) lpf[i] = INT_MAX;
	for (int i = 2; i<N; ++i){
		if (lpf[i] == INT_MAX)
		for (int j = i; j < N; j+=i){
			lpf[j] = min(i,lpf[j]);
		}
		 
	}

}

void clc_factor(map < long long, long long > &mp,long long n){
	
	while (n>1){
		int p = lpf[n];
			while (n%p==0){
				n /= p;
				mp[p]++;
			}
	}

}
void solve() {
	string s; cin >> s;
	long long cnt = 0;
	long long x = 0;
	bool f = 0;
	for (auto a : s){
		if (a == '!')f = 1;
		if (f == 0){
			x = x * 10 + a - '0';
		}
		else {
			cnt++;
		}
	}
	map < long long, long long >mp;
	long long idx = 0;
	while (x - (idx*cnt) > 0){
		clc_factor(mp, x - (idx*cnt));
		idx++;
	}
	long long ans = 1;
	long long te = 1;
	long long inf = 1e18;
	
	for (auto a : mp){
		te = a.second + 1;
		if (ans > inf / te){
			cout << "Infinity" << endl;
			return;
		}
		else {
			ans *= te;
		}
	}
	cout << ans << endl;
	
}

int main() {
	run();
	clc_sieve();
	int t; cin >> t;
	for (int i = 1; i <= t;++i){
		cout << "Case " << i << ": ";
		solve();

	}

}