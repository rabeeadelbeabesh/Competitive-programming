#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	int n, k; cin >> n >> k;
	if (k + (k - 1) > n){
		cout << "-1" << endl;
		return;
	}
	int c1= 1,c2=1;
	for (int i = 1; i <= n; i ++){

		for (int j = 1; j <= n; ++j){
			if (k > 0 && i == c1&&j == c2){
				cout << "R";
				c1 += 2;
				c2+=2;
				k -= 1;
			}
			else cout << ".";

		}
		cout << endl;
	}
}

int main() {
	  run();
	int t; cin >>t;
	while (t--){
	
	    solve();
	
  }
}