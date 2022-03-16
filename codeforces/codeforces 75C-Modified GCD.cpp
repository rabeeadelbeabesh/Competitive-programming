#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define Ceil(x,y)              ((x+y-1)/y)
long long gcd(long long x, long long y) { return (!y) ? x : gcd(y, x%y); }
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
vector<int>divs;
void clc_factor(int n){

	for (int i = 1; i*i <= n; ++i){
		if (n%i == 0){
			divs.push_back(i);
			if (n / i != i){
				divs.push_back(n / i);
			}
		}
	}

}
void solve() {
	int a, b; cin >> a >> b;
	if (a > b) swap(a, b);
	int g = gcd(a, b);
	clc_factor(g);
	sort(divs.begin(), divs.end());
	int siz = (int)divs.size();
	int t; cin >> t;
	while (t--){

		int l, r; cin >> l >> r;
		int idx = lower_bound(divs.begin(), divs.end(), r) - divs.begin();

		if (idx >= siz){
			idx--;
		}
		else {
			if (divs[idx] > r){
				idx--;
			}
		}
		if (idx < 0){
			cout << "-1" << endl;

		}
		else if (divs[idx] <= r&&divs[idx] >= l){
			cout << divs[idx] << endl;
		}
		else{
			cout << "-1" << endl;

		}

	}
}

int main() {

	run();
	solve();

}