#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase(){
	int n, m; cin >> n >> m;
	vector<int>v;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j<m; ++j){
			v.push_back(max(i, n - 1 - i) + max(j, m - j - 1));
		}
	}
	sort(v.begin(), v.end());
	for (auto a : v)cout << a << " ";
	cout << endl;
}
int main() {
	run();
	int t; cin >> t; while (t--)
	RunCase();
}