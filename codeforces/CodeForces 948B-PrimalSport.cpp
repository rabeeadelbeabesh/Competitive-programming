#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
const int N = 1e6 + 9;
int seive[N];
void clc_seive(){
	for (int i = 0; i < N; ++i) seive[i] = -1;
	for (int i = 2; i < N; ++i){
		if (seive[i] == -1){
			seive[i] = 1;
			for (int j = 2*i; j < N; j += i){
				seive[j] = i;
			}
		}
	}

}
void solve(){


		int n; cin >> n;
		int	x1 = n - seive[n] + 1;
		int ans = n;
		for (int i = x1; i <=n; ++i){
			ans = min(ans, i - seive[i] + 1);

		}
		cout << ans << endl;



}
int main() {
	run();
	clc_seive();
	solve();
}
