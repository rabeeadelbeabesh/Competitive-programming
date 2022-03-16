#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	int n; cin >> n;
	vector<int>v(n),vv; 

		int mx = 0;

	for (auto &it : v)cin >> it;

	set<int>st;
	for (auto a : v)st.insert(a);
	
	for (auto a : st)vv.push_back(a);
	for (int i = 1; i < sz(vv); ++i) mx += (vv[i] - vv[i - 1]);

	cout <<mx << endl;
     
   
	
}


int main() {
	run();
	int t; cin >> t;
	while (t--){

		solve();

	}
}