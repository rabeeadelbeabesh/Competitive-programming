#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){

	long long  n ,l; cin >> n>>l;
	vector<	bitset<360>> v(n);
	for (int i = 0; i < n; ++i){
		int x; cin >> x;
		 v[i]=x;
	}
	 long long ans=0;
	int idx = 0;
			for (int a = 0; a < 360; ++a){
				long long on = 0, z = 0;
				for (int j = 0; j < n; ++j){
					if (v[j][a] == 0)z++;
					else on++;
				}
				if (on>z)
					ans += power(2, idx);
				idx++;
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