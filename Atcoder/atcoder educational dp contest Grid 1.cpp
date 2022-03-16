#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N =1e3+ 9;
char Grid[N][N];
int n, m;
int D[N][N];
void RunCase() {
	cin >> n >> m;
	for (int i = 1; i <=n; ++i) {
		for(int j=1;j<=m;++j)
		cin>>Grid[i][j];
	}
	D[1][1] = 1;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			D[i][j] += (Grid[i - 1][j] == '.') ? D[i - 1][j] : 0;
			D[i][j] %= mod;
			D[i][j] += (Grid[i][j - 1] == '.') ? D[i][j - 1] : 0;
			D[i][j] %= mod;
		}
	}
	cout << D[n][m]% mod << endl;
}

int main() {
	run();
	RunCase();
}