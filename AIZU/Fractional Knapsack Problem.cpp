#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int  maxitem = 1e5+9;
int vlu[maxitem];
int wight[maxitem];
void solve() {
	int N, S; cin >> N >> S;
	vector<pair<double, int>>vluperwight(N);
	for (int i = 0; i < N; ++i){
		cin >> vlu[i] >> wight[i];
		vluperwight[i] = { (double)vlu[i] / wight[i], i };
	}
    double ans = 0;
	sort(vluperwight.begin(), vluperwight.end(), greater<pair<double, int>>());
	for (int i = 0; i < N; ++i){
		int item_idx = vluperwight[i].second;
		if (wight[item_idx] <= S){
			S -= wight[item_idx];
			ans += vlu[item_idx];
		}
		else{
			ans += S*vluperwight[i].first;
			S = 0;
		
		}
	}
	cout << ans << endl;

	
	
}
int main() {
	run();
	cout << fixed << setprecision(6);
	solve();
	
}
