#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	string t,s; cin >>t>> s;
	long long ans = 0;
	map<int, int>mp;
	for (int i = 0; i < (int)t.size(); ++i)mp[t[i]] = i +1;
	for (int i = 1; i < (int)s.size(); ++i){
		ans += abs(mp[s[i]]-mp[s[i-1]]);
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