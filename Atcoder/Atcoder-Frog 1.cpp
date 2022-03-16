#include<bits/stdc++.h>
using namespace std;
#define endl  '\n'
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase(){
	int n; cin >> n;
	vector<long long>h(n+1) ,dp(n+2);
	for (int i = 1; i <= n;++i)cin >> h[i];
	dp[1] = 0,dp[2]=abs(h[2]-h[1]);
	for (int i = 3; i <= n; ++i){
		dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
	}
	cout << dp[n] << endl;


}
int main() {
	run();
		RunCase();


}