#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	int n; cin >> n ;
	vector<int>v(n);
	for (auto &it : v)cin >> it;
	int sum;
	for (int i = 0; i < (1<< n); ++i){
	    sum = 0;
		for (int j = 0; j < n; ++j){
		
			if (i&(1 << j)){
				sum += v[j];
				
			}
			else sum -= v[j];
		}
		sum=abs(sum);
		if (sum == 0||sum%360==0){
			cout << "YES" << endl;
			return;
		}

	}
	cout << "NO" << endl;

}
int main() {
	 run();
	 solve();
	
}