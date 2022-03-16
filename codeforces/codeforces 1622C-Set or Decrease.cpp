#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define Ceil(x,y)              ((x+y-1)/y)
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	long long n, k, sm=0;
	
	cin >> n >> k;
	vector<long long>v(n+1);
	sm = 0;
	for (int i = 1; i <=n; ++i){
		cin >> v[i];
		sm += v[i];
	}
	if (sm <= k){
		cout << "0" << endl;
		return;
	}
	if (sm == k + 1){
		cout << "1" << endl;
		return;
	}
	sort(v.begin()+1,v.end());

	long long diff = sm - k, ans = sm - k;
	sm = 0;
	for (int i = n; i > 1; i--){
		sm += v[i];
		long long x = 0;
		if (sm - (n - i + 1)*v[1] >= diff)x = 0;
		else x = max(Ceil(diff - sm + (n - i + 1)*v[1], (n - i + 2)), 0LL);
		ans = min(ans, x + n - i + 1);
	
	}
	cout << ans << endl;


}
int main() {
	run();
	int t; cin >> t;
	while (t--)
	{
		solve();

	}


}