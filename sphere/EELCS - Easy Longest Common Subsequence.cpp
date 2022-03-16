#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void Generate_sup(set<string>&st, string s) {
	int  n = (int)s.size();
	string t = "";
	for (int i = 0; i<(1<<n);++i){
		t = "";
		for (int j = 0; j < n; ++j){
		
			if (i&(1 << j)){
				t.push_back(s[j]);
			}
		
		}
		
		st.insert(t);
	}

}
void solve() {
	string s, t; cin >> s >> t;
	set<string>st1, st2;
	Generate_sup(st1, s);
	Generate_sup(st2, t);
	int ans = 0;
	for (auto a : st1){
		if (st2.find(a) != st2.end()) ans = max(ans, sz(a));
	}
	cout << ans << endl;
}
int main() {
	    run();
	    solve();

}