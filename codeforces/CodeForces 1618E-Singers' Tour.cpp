#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void solve() {
	long long n; cin >> n ;
	vector<long long >v(n),ans(n);
	long long sb = 0;
	for (auto &it : v)cin >> it,sb += it;
	long long sn = (n*(n + 1)) / 2;

	if (sb%sn != 0){
		cout << "NO" << endl;
		return;
	}
	long long sa = sb / sn;
	
	for (int i = 0; i < n; ++i){

		int dif = v[i] - v[(n - 1 + i)%n];
		long long cur = sa - dif;
		if (cur%n !=0 || cur <=0){
			cout << "NO" << endl;
			return;
		}
		
		cur /= n;

		ans[i] = cur;
	}
	cout << "YES" << endl;
	for (auto a : ans)cout << a << " ";
	cout << endl;



}
int main() {
	int t; cin >> t;
	while (t--){
		solve();
	}
}