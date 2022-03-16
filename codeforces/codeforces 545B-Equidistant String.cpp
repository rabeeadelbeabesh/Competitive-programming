#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void solve() {
	string s, t,ans=""; cin >> s >> t;
	int ndiff = 0;
	for (int i = 0; i < sz(s); ++i){
		if (s[i] != t[i])ndiff++;
	}
	if (ndiff % 2 == 1){
		cout << "impossible" << endl;
		return;
	}

	 ndiff /= 2;
	 for (int i = 0; i < sz(s); ++i){
		 if (s[i] == t[i])ans.push_back(s[i]);
		 else{
			 if (ndiff>0){
				 ans.push_back(s[i]);
				 ndiff -= 1;
			 }
			 else {
				 ans.push_back(t[i]);
			 }
		 }
	 }
	 cout << ans << endl;
	
}
int main() {
	run();
	solve();
	
}