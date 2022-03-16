#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {

	string s; cin >> s;
	int  n = (int)s.size();

	string ans = "",t="",tt="";
	for (int i = 0; i<(1 << n); ++i){
		    t = "";
		for (int j = 0; j < n; ++j){
			if (i&(1 << j)){
				t.push_back(s[j]);
			}
		
		}
		tt = t;
		reverse(all(tt));
		if (t == tt){
			ans = max(ans, t);
		}
	}

	cout << ans<< endl;;


}

int main() {

	run();
       solve();
}