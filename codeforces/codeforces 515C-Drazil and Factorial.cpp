#include<bits/stdc++.h>
using namespace std;
#define endl  '\n'  
void run() {
	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void solve() {
	int n; cin >> n;
	vector<pair<int, int>>v = { { 2, 2 }, { 6, 3 }, { 120, 5 }, { 5040, 7 } };
	vector<int>fact(10);
	fact[0] = 1;
	for (int i = 1; i < 10; ++i){
		fact[i] = (i*fact[i - 1]);
	}
	string s; cin >> s;
	vector<int>ans;
	for (auto a : s){
		if (a == '0' || a == '1')continue;
		int z = a - '0';
		z = fact[z];
		int idx = 3;
		while (z>1){
			while (idx>=0&&z%v[idx].first==0){
				ans.push_back(v[idx].second);
				z/=v[idx].first;
			}
			idx--;
		}
	}
	sort(ans.begin(), ans.end(), greater<int>());
	for (auto a : ans)cout << a ;
	cout << endl;
}
int main() {
               run();
		solve();
}