#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	int  n; cin >> n;
	vector<long long>v(n);

	for (auto &it : v)cin >> it;

	long long sum1 = 0, sum2 = 0, ans = LLONG_MAX;

	for (int i = 0; i<(1 << (n-1)); ++i){
		sum1 = 0, sum2 = 0;
		for (int j = 0; j < n; ++j){
			sum2 |= v[j];

			if (j==n-1||i&(1 << j)){
				sum1 ^= sum2;
				sum2 = 0;
			}
			 
		
		}
		
		ans = min(ans, sum1);
	}

		cout << ans<< endl;;


}

int main() {
	run();
	solve();

}