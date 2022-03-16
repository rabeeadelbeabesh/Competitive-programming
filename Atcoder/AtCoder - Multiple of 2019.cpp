#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
          

void solve() {
	string s; cin >> s;

	int dp[2019]{1};
	long long x = 0 ,p=1;
	for (int i = sz(s) - 1; i >= 0; i--)
	{
		x = (x + p * (s[i] - '0')) % 2019;
		dp[x]++;
		p = p * 10 % 2019;
	}
	long long ans = 0;
	for (int i = 0; i < 2019; ++i){
		ans +=(long long) dp[i] * (dp[i]-1) / 2;
	}
	cout << ans << endl;

}
int main() {
	run();
	solve();
}