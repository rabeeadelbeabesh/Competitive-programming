#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void solve() {
	int n; cin >> n;
	vector<int>v(n+1,0);
	multiset<int>st;
	for (int i = 0; i < n; ++i){
		int x; cin >> x;
		st.insert(x);
	}

	for (int i = 1; i <= n; ++i){
		auto it = st.find(i);
		if ( it!= st.end()){
			v[i] = *it;
			st.erase(it);
		}
	}

	int  cnt = 0;
	for (int i = 1; i <= n; ++i){
		if (v[i] == 0){
			auto it = st.lower_bound((2*i)+1);
			if (it != st.end()){
				v[i] = *it;
				cnt++;
				st.erase(it);
			}
		}
	}

	for (int i = 1; i <= n; ++i)if (v[i] == 0){
		cout << "-1" << endl;;
		return;
	}
	cout << cnt << endl;
	
}

int main() {
	int t; cin >> t;
	while (t--){
		solve();
	}
}