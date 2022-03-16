#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
long long gcd(long long x, long long y) { return (!y) ? x : gcd(y, x%y); }
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

const int N = 10000009;
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
	int n; cin >> n;
	
	int g = 0;
	for (int i = 0; i < n; ++i){
		int x; cin>> x;
		clc_factor(x);
		g = gcd(g, x);
	}
	int mx = 0;
	for (auto a : mp) mx = max(mx, a.second);
	if (mx <=1){
		cout << "pairwise coprime" << endl;
	}
	else  if (g == 1){
		cout << "setwise coprime" << endl;
	}
	else cout << "not coprime" << endl;

}
int main() {
	run();
	sieve();
	solve();
}