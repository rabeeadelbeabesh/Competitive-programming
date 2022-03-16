#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
#define all(v)  ((v).begin()), ((v).end())     
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase(){
	int n; cin >> n;
	vector<long long>c(n),v(n);
	vector<vector<int>>ans;
	deque<int>t;
	for (int i = 0; i < n; ++i){
		int x; cin >> x;
		v[i] = x;
		c[i] = x;
	}

	sort(all(c));
	for (int i = 0; i < n; ++i){
		int j = i;
		for (; j < n; ++j)if (c[i] == v[j]) break;
		if (i != j)
			ans.push_back({ i + 1, j + 1, j - i });
		for (int a = i; a <= j; a++)t.push_back(v[a]);
		for (int a = i; a < j; a++){
			t.push_back(t[0]);
			t.pop_front();
		}
	
		int c = 0;
		for (int a = i; a <= j; ++a){
			v[a] = t[c];
			c++;
		}
		t.clear();
		
	}
	
	cout << sz(ans) << endl;
	for (int i = 0; i < sz(ans); ++i)cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
	
}
int main() {
	int t; cin >> t; while (t--)
		RunCase();


}