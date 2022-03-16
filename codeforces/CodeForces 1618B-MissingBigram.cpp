#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
void solve() {
	
	int n; cin >> n;
	cin.ignore();
	string s, ans = "";
	getline(cin,s);
	stringstream ss(s); 
	string word; 

	while (ss >> word){
		if (ans == "") {
			ans.push_back(word[0]);
			ans.push_back(word[1]);
		}
		else if (ans.back() == word[0]){
			ans.push_back(word[1]);
		}
		else{
			ans.push_back(word[0]);
			ans.push_back(word[1]);
		}
	}
	int c = n-sz(ans);
	while (c--){
		ans.push_back('b');
	}
	cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while (t--){
		solve();
	}
}