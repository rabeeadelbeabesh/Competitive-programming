#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
#define all(v)  ((v).begin()), ((v).end())          
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	int n, idx=-1,c1 = 0, c2 = 0, k; cin >> n >> k;
	idx = n;
	string s,q=""; cin >> s;
	stack<char>st;
	for(int i=0;i<sz(s);++i){
		if (min(c1, c2) * 2 == k){
			idx = i;
			break;
		}
		if (s[i] == '(')c1++;
		else c2++;
	
	}
	bool f = 0;
	
	if (c1>c2)f = 1;
	if (c2 > c1) f = 0;
	c1 = abs(c1 - c2);
	for (int i = idx - 1; i >= 0; --i){
		if (f == 1 && s[i] == '('&&c1>0){
			c1 -= 1;
		}
		else if (f == 0 && s[i] == ')'&&c1 > 0){
			c1 -= 1;
		}
		else q.push_back(s[i]);
	

	}
	reverse(all(q));
	cout << q << endl;
	


}
int main() {
	  run();
	  solve();
	
	
}