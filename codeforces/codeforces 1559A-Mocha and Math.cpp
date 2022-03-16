#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void solve(){
    int n, x; cin >> n;
	int ans;
	cin >> ans;
	for (int i = 1; i < n; ++i){
		cin >> x;
		ans &= x;
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
