#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void solve() {
	
	vector<int>v(7);
	for (auto &it : v)cin >> it;

	cout << v[0]<<" "<<v[1]<<" "<<v[6] - (v[0] + v[1]) << endl;

}

int main() {
	int t; cin >> t;
	while (t--){
		solve();
	}
}