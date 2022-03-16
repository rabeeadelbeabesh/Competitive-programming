#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
const int N = 1e7 + 1;
int lpf[N];
vector<int>v(N, 0);
void clc_seive(){
	for (int i = 1; i < N; ++i)lpf[i] = INT_MAX;
	for (int i = 2; i < N; ++i){
		if (lpf[i] == INT_MAX){
			for (int j = i; j<N; j += i){
				lpf[j] = min(lpf[j], i);
			}
		}
	}
}
void fact(int n){
	while (n>1){
		int p = lpf[n];
		if (n%p == 0)v[p]++;
		while (n%p==0){
			n /= p;
		}
	}

}
void solve(){
	int n; cin >> n;
	for (int i = 0; i < n; ++i){
		int x; cin >> x;
		fact(x);
	}
	
	for (int i = 1; i < N; ++i)v[i] += v[i - 1];

	int q; cin >> q;
	while (q--){
		int  l, r; cin >> l >> r;
		l = min(l, N - 1);
		r= min(r, N - 1);
		cout << v[r] - v[l - 1] << endl;

	}
}
int main() {
	clc_seive();
	solve();
}