#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void RunCase(){
	string s; cin >> s;
	vector<int>v(3,0);
	for (auto a : s)v[a - 'A']++;
	if (v[1] == (v[0] + v[2]))cout << "YES" << endl;
	else cout << "NO" << endl;

}
int main() {
	run();
	int t; cin >> t; while (t--)
	RunCase();
}