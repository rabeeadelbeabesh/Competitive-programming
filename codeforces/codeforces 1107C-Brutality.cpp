#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {

	int n, k; cin >> n >> k;
	vector<int>v(n),orv;
	multiset<int, greater<int>>st;
	for (auto &it : v)cin >> it;
	string s; cin >> s;
	int j = 0;
	char ch = s[0];
	for (int i = 0; i < n; ++i){

		while (j <i&&sz(st)>0&&s[j] != s[i]){
			orv.push_back(*st.begin());
			st.erase(st.begin());
			j++;
		}
		ch = s[i];
		st.insert(v[i]);
	}
	while (sz(st)>0){
		orv.push_back(*st.begin());
		st.erase(st.begin());

	}
	long long sum = 0;
	j = 0;
	for (int i = 0; i < n; ++i){
		int c = 0;
		while ( s[j] != s[i]){
			if (c+1<=k){
				sum += orv[j];
					c++;
			}
			j++;
		}
		
	}


	 int c = 0;
	while (j<n){
		if (c +1<= k){
			sum += orv[j];
			c++;
		}
		j++;
	}
	cout << sum << endl;

}
int main() {

	run();
	solve();

	


}