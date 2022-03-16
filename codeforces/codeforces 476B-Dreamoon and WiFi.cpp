#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	string s, t; cin >> s >> t;
	int cnt = 0,test ,n=(int)t.size();

	for (auto a : s)(a == '+')?cnt ++:cnt--;
	
	double c2=0;
	for (int i = 0; i<(1 <<n); ++i){
		 test = 0;
		for (int j = 0; j < n; ++j){
			(t[j] != '?') ? (t[j] == '+') ? test++ : test-- : (i&(1 << j)) ? test++ : test--;

		}
		(test == cnt)?c2++:c2;
	}

		cout <<c2/(1<<n)<< endl;;


}

int main() {

	  run();
	  cout << fixed << setprecision(12);
	  solve();
	
}