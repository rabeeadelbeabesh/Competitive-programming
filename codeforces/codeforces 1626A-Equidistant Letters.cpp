#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define all(v)  ((v).begin()), ((v).end())     
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	string s; cin >> s;
	sort(all(s));
	cout << s << endl;

}
int main() {
	run();
	int t; cin >> t;while (t--)
		solve();
}