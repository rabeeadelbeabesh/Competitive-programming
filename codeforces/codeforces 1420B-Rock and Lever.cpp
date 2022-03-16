#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	int n; cin >> n;
	vector<int>v(n);
	vector<bool> vis(n, 1);
	for (auto &it : v)cin >> it;
	long long ans = 0,cnt=0;
	for (int i = 31; i >=0; --i){

           cnt=0;
		for (int j = 0; j< n;++j){
			if ((v[j] >> i) & 1){
				if (vis[j]){
					cnt++;
					vis[j] = 0;
				}
			}
		}
		ans += (cnt*(cnt - 1)) / 2;

	}
	cout << ans << endl;

}
int main() {
	run();
	int t; cin >> t;
	while (t--){

		solve();

	}
}