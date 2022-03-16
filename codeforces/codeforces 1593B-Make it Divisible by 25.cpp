#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){

	string s; cin >> s;
	
	int mn = INT_MAX,n=(int)s.size();
	for (int i=0;i<n;++i){
		for (int j = i + 1; j < n; ++j){
			int cur = (s[i] - '0') * 10 + (s[j] - '0');
			if (cur % 25 == 0){
				
				mn = min(mn, n - (i + 2));
			}
		}
		
	}
	cout << mn << endl;

}


int main() {
	run();
	int t; cin >> t;
	while (t--){

		solve();

	}
}