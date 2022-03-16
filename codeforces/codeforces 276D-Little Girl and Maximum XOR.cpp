#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	long long l, r; cin >> l >> r;

	long long a = (l^r),k=0;
	for (int i = 62; i >= 0; --i){
		if ((a >> i) & 1){
			k = i + 1;
			break;
		}

	}
	cout << (1LL << k) - 1 << endl;

}
int main() {
	run();
	solve();
}