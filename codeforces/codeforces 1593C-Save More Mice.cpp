#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
#define all(v)  ((v).begin()), ((v).end())          
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	int  n, k; cin >> n >> k;
	vector<int >v(k);
	for (auto &it : v)cin >> it;
	sort(all(v));

	int i = 0, j = 0;
	long long  cnt = 0, x = 0;
	while (j<sz(v)&&sz(v)>0){
		long long  c = n - v.back();
		v.pop_back();
		x += c;
		while (j<sz(v)&&x>=v[j]){
			cnt++;
			j++;
		}

	}
	cout << k - cnt << endl;

}


int main() {
	run();
		int t; cin >> t;
	while (t--){

	solve();

		}
}