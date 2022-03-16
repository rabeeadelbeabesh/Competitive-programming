#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N = 1e6 + 9;
long long npairs[N];
long long frq[N];
long long nc3(long long n){
	if (n < 3)return 0;
	return (n*(n - 1)*(n - 2)) / 6;
}
void solve() {

	int n,x; cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> x;
		frq[x]++;
	}
	for (int i = 1; i < N; ++i){
		for (int j = i; j < N; j += i){
			npairs[i] += frq[j];
		}
		npairs[i] = nc3(npairs[i]);
	}
	for (int i = N - 1; i > 0; --i){
		for (int j = 2 * i; j < N; j += i){
			npairs[i] -= npairs[j];
		}

	}
	cout << npairs[1] << endl;
	
}
int main() {
	run();
	solve();
}