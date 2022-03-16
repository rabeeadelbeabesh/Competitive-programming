#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase() {
	
	int n; cin >> n;
	string s; cin >> s;
	if (n == 1) {
		cout << "YES" << endl;
		return;
	}
	else if (n == 2) {
		if (s[0] == s[1]) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}
int main() {
	run();
	int t; cin >> t; while (t--)
		RunCase();


}