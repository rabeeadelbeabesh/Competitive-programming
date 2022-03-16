#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
#define all(v)  ((v).begin()), ((v).end())     
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase(){
	int n,x; cin >> n;
	vector<int>v1(n), v2(n);
	for (auto &it : v1)cin >> it;
	for (auto &it : v2)cin >> it;
	for (int i = 0; i < n; ++i){
		if (v1[i] < v2[i]) swap(v1[i], v2[i]);
	}
	sort(all(v1));
	sort(all(v2));
	cout << v1[n - 1] * v2[n - 1] << endl;
}
int main() {
	run();
	int t; cin >> t; while (t--)
	RunCase();


}