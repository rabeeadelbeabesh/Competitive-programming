#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void solve() {

	vector<int>v(4);
	for (auto &it: v)cin >> it;
	sort(all(v)); 
		cout << (((v[3] + v[0]) == (v[1] + v[2])) ? "YES" : v[3] == (v[0]+ v[1] + v[2]) ? "YES":"NO") << endl;
}
int main() {
	run();
	solve();
}