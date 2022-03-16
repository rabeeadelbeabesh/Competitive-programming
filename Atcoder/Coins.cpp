#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N =3*1e3+ 9;
int n;
double G[N];
double D[N][N];
void RunCase() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++)cin >> G[i];
	D[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= n/2; ++j) {
			if (j == 0) {
				D[i][j] = G[i]*D[i - 1][j];

			}

			else {

				D[i][j] = D[i - 1][j] * G[i] + D[i - 1][j - 1] * (1 - G[i]);
			}

		}
	}
	double ans = 0;
	for (int i = 0; i <= n / 2; ++i) {
		ans += D[n][i];
	}
	cout << ans << endl;

}
int main() {
	cout << fixed << setprecision(10);
	run();
	RunCase();
}