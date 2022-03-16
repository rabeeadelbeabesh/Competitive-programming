#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase(){
	int n ,k; cin >> n>>k;
	vector<long long>h(n+1) ,dp(n+2);
	for (int i = 1; i <= n;++i)cin >> h[i];
	dp[1] = 0;
	for (int i = 2; i <= n; ++i){
		dp[i] = LLONG_MAX;
		for (int j = 1; j <= k; ++j){
			if (i-j>=1)
				dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
		}
		
	}
	cout << dp[n] << endl;

}
int main() {
	
	run();
        RunCase();


}