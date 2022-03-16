#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
bool seive[N];
vector<int>prim;
int ans[N] = { 0 };
void clc_seive(){
	seive[1] = seive[0] = 1;
	for (int i = 2; i*i <= N; ++i){
		if (seive[i] == 0){
			for (int j = 2 * i; j < N; j += i){
				seive[j] = 1;
			}
		}
	}
	for (int i = 3; i < N; ++i) if (seive[i] == 0 && i + 2 < N&&seive[i + 2] == 0){
		ans[i + 2]++;

	}

	for (int i = 1; i < N; ++i)ans[i] += ans[i - 1];


}
void solve(){

	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		cout << ans[n] << endl;

	}



}
int main() {
	clc_seive();
	solve();
}
