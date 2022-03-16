#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
const ll mod = 1e9 + 7;;
const int N = 1e6 + 9;
vector<vector<int>>divsor(N);
long long frq[N] = { 0 };
void clc_seive(){
	for (int i = 1; i < N; ++i){
			for (int j = i; j < N; j += i){
				divsor[j].push_back(i);
			}
	}
	for (int i = 1; i < N; ++i){
		sort(all(divsor[i]), greater<int>());

	}
}
void solve(){
	clc_seive();

	int t,n; cin >> t;
	frq[0] = 1;

	for (int i = 0; i < t; ++i){
        	cin >> n;
			for (auto a : divsor[n]){
			frq[a] += frq[a - 1] %mod;
			frq[a] %= mod;

		}
	}
	long long  ans = 0;
	for (int i = 1; i < N; ++i){
		ans +=frq[i];
		ans%= mod;

	}
	cout << ans << endl;


}
int main() {
	run();
	solve();
}