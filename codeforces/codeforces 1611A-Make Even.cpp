#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	string s; cin >> s;
	bool f = 1;
	for (auto a : s){
		int c = a - '0';
		if (c % 2 == 0)f = 0;
	}
	if (f){
		cout << "-1" << endl;
		return;
	}
	if ((s[sz(s) - 1] - '0') % 2 == 0){
		cout << "0" << endl;
	}
	else if ((s[0] - '0') %2==0 ){
		cout << "1" << endl;
	}
	else  cout <<"2"<< endl;
}

int main() {
	  run();
	int t; cin >>t;
	while (t--){
	
	    solve();
	
  }
}