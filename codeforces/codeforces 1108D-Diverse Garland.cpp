#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int ans = 0;
	vector<char>v = { 'R', 'G', 'B' };
	stack<char>st;
	for (int i = 0; i < (int)s.size(); ++i){
		if (st.empty())st.push(s[i]);
		else if (st.top() == s[i]){
			char ch='#';
			if (i + 1 < n){
				ch = s[i + 1];
			}
			for (auto a : v){
				if (a != s[i] && ch != a){
					st.push(a);
					ans++;
					break;
				}
			}
		}
		else {
			st.push(s[i]);
		}
	}
	s.clear();
	while (!st.empty()){
		s.push_back(st.top());
		st.pop();
	}
	reverse(s.begin(), s.end());
	cout << ans << endl;
	cout << s << endl;


}
int main() {
	run();
	solve();

}