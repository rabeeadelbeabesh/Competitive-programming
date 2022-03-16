#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase() {
	string s; cin >> s;
	int z = 0, w = 0;
	for (auto a : s)if (a == '0')z++; else w++;
	if (w == z)cout << w - 1 << endl;
	else cout << min(w, z) << endl;
}
int main() {
	run();
	int t; cin >> t; while (t--)
		RunCase();
}