#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

const int N = 15000001;
int lpf[N];
map<int, int>mp;
void sieve(){
	for (int i = 0; i < N; ++i)lpf[i] = INT_MAX;
	for (int i = 2; i < N; ++i){
		if (lpf[i]==INT_MAX)
		for (int j = i; j < N; j+=i){
			lpf[j] = min(i, lpf[j]);
		}
	}
}
void clc_factor(int n){
	while (n>1){
		int p = lpf[n];
		if (n%p == 0)mp[p]++;
		while (n%p==0){
			n /=p;
		}

	}
}
void solve() {
	int n,nn; cin >> n;
	nn = n;
	vector<int>v(n);
	int g = 0;
	for (int i = 0; i < n; ++i){
		cin >> v[i];
		g = gcd(g, v[i]);
	}
	int ans = 0;
	for (int i = 0; i < n; ++i){
		if (v[i] / g == 1){
			v[i] = 1;
			ans++;
		}
		else{
			v[i] /= g;
			clc_factor(v[i]);
		}
	}
	int mx = 0;
	nn -= ans;
	for (auto a : mp) mx = max(mx, a.second);
	ans += (nn- mx);
	cout << (ans==n?-1:ans) << endl;

}
int main() {
	run();
	sieve();
	solve();
}