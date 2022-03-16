#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N = 1e5 + 9;
int A[N], B[N], C[N];
int D[N][3];
void RunCase() {
	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> A[i] >> B[i] >> C[i];
	}
	for (int i = 1; i <= n; ++i) {
		D[i][0] = A[i] + max(D[i - 1][1], D[i - 1][2]);
		D[i][1] = B[i] + max(D[i - 1][0], D[i - 1][2]);
		D[i][2] = C[i] + max(D[i - 1][1], D[i - 1][0]);
	}
	cout << max({ D[n][0],D[n][1],D[n][2] }) << endl;

}
int main() {
	run();
        RunCase();
}