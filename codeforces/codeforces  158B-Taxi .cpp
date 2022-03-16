#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	long long n; cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; ++i){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int i = 0, j = n - 1,ans=0;
	while (i <= j){
		int cp = v[j];
		while (cp+v[i]<=4){
			cp += v[i];
			i++;
		}
		j--;
		ans++;

	}
	cout << ans<< endl;
}
int main() {
	run();
	solve();
	
}