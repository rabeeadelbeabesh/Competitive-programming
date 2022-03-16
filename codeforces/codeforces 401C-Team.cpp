#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	bool f = 0;
	long long n, m; cin >> n >> m;
	if (n == m){
		for (int i = 0; i < n; ++i){
			cout << "10";
		}
		return;
	}
	if (n>m){
		if (abs(n - m) == 1){
			for (int i = 0; i <m; ++i){
				cout << "01";
			}
			cout << "0";
			cout << endl;
		}
		else {
			cout<<"-1" << endl;
		}
		return;
	}
	if ( m / (n+1) >=3){
		cout << "-1" << endl;
		return;
	}
	if (m / (n + 1) == 2 && m % (n + 1)!=0){
		cout << "-1" << endl;cturn;
	}

	int c = m / (n+1);
	int md = m % (n + 1);
	for (int i = 0; i <= n; ++i){
		if (md>0){
			cout << "1";
			md-= 1;
		}
		for (int q = 0; q < c; ++q)cout << "1";
		if (i<n)
		cout << "0";
	}
	
	cout << endl;
}
int main() {
	run();
	
		solve();

}