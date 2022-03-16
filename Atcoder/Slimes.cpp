#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const long long oo = 1e18L + 5;
const int N = 405;
long long D[N][N];
void RunCase() {
	int n;
	cin >> n;
	vector<long long >v(n + 9);
	for (int i = 1; i <= n; ++i)cin >> v[i], v[i] += v[i - 1];
	for (int i = n; i>0; --i) {
		for (int j = i; j <= n; j++) {
			if (i == j)D[i][j] =0;
			else{
				D[i][j] = oo;
				long long sum_i_j = v[j] - v[i - 1];
				for (int k = i; k <= j - 1; ++k) {
					D[i][j] = min(D[i][j], D[i][k] + D[k + 1][j] + sum_i_j);
			       }
		      }
	    }
   }
		cout << D[1][n] << endl;
}
int main() {
	run();
	RunCase();

}