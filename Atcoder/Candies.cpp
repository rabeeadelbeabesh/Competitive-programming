#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const long long mod = 1e9 + 7;
const int N = 1e5 + 9;
int D[109][N];
void RunCase() {
	int n, k;
     cin >> n >> k;
	 vector<int>v(n + 9);
	for (int i = 1; i <= n; ++i)cin >> v[i];
        D[0][0] = 1;
	for (int i = 1; i <= n; ++i) {
		vector<int>sm(k+9, 0);
		sm[0] = D[i - 1][0];
		for (int j = 1; j <= k; ++j) sm[j] = (sm[j - 1] + D[i - 1][j]) % mod;
		for (int j = 0; j <= k; ++j) {
			if (j <= v[i]) {
				D[i][j] += sm[j];
				D[i][j] %= mod;
			}
			else {
				int non = j - v[i] - 1;
				D[i][j] = (sm[j] - sm[non] +mod) % mod;
			}
		}
		sm.clear();
	}
	cout << D[n][k]%mod << endl;

}
int main() {
	run();
	RunCase();

}