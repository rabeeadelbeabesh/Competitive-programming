#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N = 1e5 + 9;
long long w[109], v[109];
long long  D[109][N];
void RunCase() {
	int n,W; cin >> n>>W;
	for (int i = 1; i <= n; ++i) cin >> w[i] >> v[i];
	for (int i = 1; i <= n; ++i) {
		for (int j =1; j<= W; ++j) {
			D[i][j] = D[i - 1][j];
			if (j - w[i] >= 0)
				D[i][j] = max(D[i][j], D[i-1][j - w[i]] + v[i]);
		}
	}
	cout << D[n][W] << endl;	
}
int main() {
	run();
	RunCase();
}