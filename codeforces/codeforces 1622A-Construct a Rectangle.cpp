#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define all(v)  ((v).begin()), ((v).end())          
void run() {
	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void solve() {
	vector<int>v(3);
	for (int i = 0; i < 3; ++i)cin >> v[i];
	sort(all(v));
	if (v[1] == v[0]&&v[2]%2==0){
		cout << "YES" << endl;
	}
	else if (v[1] == v[2] && v[0] % 2 == 0){
		cout << "YES" << endl;
	}
	else if (v[2] - v[1] == v[0]){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
	
}
int main() {
	run();
	int t; cin >> t;
	while (t--)
	{
		solve();

	}
		
	
}