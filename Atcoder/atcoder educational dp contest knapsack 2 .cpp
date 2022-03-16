#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N = 1e5+9;
int w[109], v[109];
long long D[109][N];
void RunCase() {
	int n,W; cin >> n >> W;
	for (int i =1; i <=n; ++i) {
		cin >> w[i] >> v[i];
	}
	for (int i = 0; i <=n; ++i) {
		for (int j = 0; j < N; ++j) {
			if (i == 0 || j == 0) {
				if (i == 0 && j > 0)D[i][j] = INT_MAX;
				continue;
			}
			D[i][j] = D[i - 1][j];
			if (j - v[i] >= 0)
				D[i][j] = min(D[i][j], D[i - 1][j - v[i]] + w[i]);
			
		}
	}
	for (int i = N - 1; i >= 0; --i) {
		if (D[n][i] <= W) {
			cout << i << endl;
			break;
		}
	}
}
int main() {

	run();
	RunCase();
}