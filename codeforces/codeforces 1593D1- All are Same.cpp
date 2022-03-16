#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	long long  n; cin >> n;
	set<int>st, te;
	for (int i = 0; i < n; ++i){
		int x; cin >> x;
		st.insert(x);
	}
	int fr = *st.begin();
	st.erase(fr);
	for (auto a : st){
		te.insert(a - fr);
	}
	int ans = 0;
	for (auto a : te)ans=gcd(ans,a);
	cout << ((ans==0)?-1:ans )<< endl;
}


int main() {
	run();
	int t; cin >> t;
	while (t--){

		solve();

	}
}