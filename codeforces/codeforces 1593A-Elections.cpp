#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	long long  a, b, c; cin >> a >> b >> c;
	long long  mx = max({ a, b, c });
	if (a==b&&b==c)
	cout << 1<< " " << 1 << " " << 1<< endl;
	else {
		if (a==b&&a==mx||a==c&&a==mx||b==c&&b==mx)
			cout <<  mx + 1 - a << " " <<  mx - b + 1 << " " << mx - c + 1 << endl;
		else cout << (mx == a ? 0 : mx - a + 1) << " " << (mx == b ? 0 : mx - b + 1) << " " << (mx == c ? 0 : mx - c + 1) << endl;
	}

}


int main() {
	run();
		int t; cin >> t;
	while (t--){

	solve();

       }
}