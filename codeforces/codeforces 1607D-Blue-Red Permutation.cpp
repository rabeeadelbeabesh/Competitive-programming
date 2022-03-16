#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){

	int n; cin >> n;
	vector<int>v(n);
	for (auto &a : v)cin >> a;
	multiset<int>str, stb;
	string s; cin >> s;
	for (int i = 0; i < n; ++i){
		if (s[i] == 'R')str.insert(v[i]);
		else stb.insert(v[i]);
	}

	for (int i = 1; i <= n; ++i){
	
		auto a = stb.find(i);
		if (a != stb.end()){
			stb.erase(a);
		}
		else if (!stb.empty()&&*stb.begin()>i){
			stb.erase(stb.begin());
		}
		else if (!str.empty()&&*str.begin() <= i){
			str.erase(str.begin());
		}
		else{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}


int main() {
	run();
	int t; cin >> t;
	while (t--){

		solve();

	}
}