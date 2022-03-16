#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	int  n; cin >> n;
	vector<int>v(n), st;
	for (auto &it : v)cin >> it;
	int ans = 0;
	for (int i = (1 << n)-1; i>0; --i){
		st.clear();
		for (int j = 0; j < n; ++j){
		
			if (i&(1 << j)){
				if (st.empty() || st.back() < v[j]){
					st.push_back(v[j]);
				}
			}
		
		}
		
		ans = max(ans, sz(st));
	}

		cout << ans<< endl;;


}
int main() {
	    run();
	    solve();
	

}