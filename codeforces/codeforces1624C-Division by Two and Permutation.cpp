#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	int n; cin >> n;
	vector<int>v(n);
	set<int>st;
	for (int i = 1; i <= n; ++i)st.insert(i);
	for (auto &it : v)cin >> it;
	for (auto a : v){
		
		int k = a;
		while (k>0){
			if (st.find(k) != st.end()){
				st.erase(k);
				break;
			}
			k /= 2;
		}
	}
	cout << (sz(st) == 0 ? "YES" : "NO") << endl;
   
	
}


int main() {
	run();
	int t; cin >> t;
	while (t--){

		solve();

	}
}