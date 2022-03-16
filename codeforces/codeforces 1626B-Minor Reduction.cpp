#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	string s; cin >> s;
	int n = s.size();
	int idx = 0;
	for (int i = 0; i < n - 1; ++i){
		int x = (s[i] - '0') + (s[i + 1] - '0');
		if (x>9) idx = i;
	}
	for (int i = 0; i < idx; ++i)cout << s[i];
	int x = (s[idx] - '0') + (s[idx + 1] - '0');
	cout << x;
	for (int i = idx+2; i <n; ++i)cout << s[i];
	cout << endl;
}
int main() {
	run();
	int t; cin >> t; while (t--)
		solve();
}