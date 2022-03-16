#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N = 1 << 21;
long long D[N];
bool R[22][22];
int n;
void RunCase() {

	cin >> n;
	for (int i = 0; i <n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> R[i][j];
		}
   }
	D[0] = 1;	

		for (int mask = 0; mask <= (1 << n) - 1; ++mask) {
			int idx = __builtin_popcount(mask);
			for (int i = 0; i < n; ++i) {
				if (R[idx][i]&&!(mask&(1<<i))) {
					int cur = mask ^ (1 << i);
					D[cur] += D[mask] % mod;
					D[cur]%= mod;
				}
			}
		
		}


	cout << D[(1<<n)-1]%mod << endl;

}
int main() {
	run();
	RunCase();
	

}
==================================================================================================================================================
#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define mem(x,y)     memset(x,y,sizeof(x))
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N = 30;
long long D[N][1<<22];
bool R[N][N];
int n;
long long solve(int idx, int rem) {
	if (idx == n) {
		return 1;
	}

	long long &ans = D[idx][rem];
	if (~ans) return ans;
	ans = 0;
	for (int i = 0; i <n; ++i) {
		if ((rem& (1<<i))== 0&&R[idx][i]) {
			ans+=solve(idx + 1, rem | (1 << i));
			ans%=mod;
		}
	}
	return ans%mod;
}
void RunCase() {
	mem(D, -1);
	cin >> n;
	for (int i = 0; i <n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> R[i][j];
		}
   }
    cout << solve(0, 0) << endl;


}
int main() {
	run();
	RunCase();

}