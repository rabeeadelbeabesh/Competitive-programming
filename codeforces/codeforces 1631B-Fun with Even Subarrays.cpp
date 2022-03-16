#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
#define all(v)  ((v).begin()), ((v).end())     
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase() {
	int n; cin >> n;
	vector<int>v(n),D(n+9);
	for (auto &a : v)cin >> a;
	reverse(all(v));
	int i = 1;
	int ans = 0;
	while (i<n){
		if (v[i] == v[0]) {
			i++;
			continue;
		}
		i *= 2;
		ans++;

	}
	
	cout << ans<< endl;

	 
}
int main() {
	run();
	int t; cin >> t; while (t--)
		RunCase();


}