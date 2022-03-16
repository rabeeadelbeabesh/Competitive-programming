#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void RunCase(){
	int n,m; cin >> n>>m;
	vector<int>v(n + 1, 0);
	set<int>st;
	for (int i = 0; i < m; ++i){
		int  x, y; cin >> x >> y;
		v[min(x, y)] += 1;
		st.insert(min(x, y));
	}
	int q;; cin >> q;
	while (q--){
		int op; cin >> op;
		if (op == 1){
			int x, y; cin>>x >> y;
			v[min(x, y)] += 1;
			st.insert(min(x, y));
		}
		else if (op == 2){
			int x, y; cin >> x >> y;
			v[min(x, y)] -= 1;
			if (v[min(x, y)]==0)
			st.erase(min(x, y));
		}
		else cout << n - sz(st) << endl;
	}
}
int main() {
	run();
	RunCase();


}