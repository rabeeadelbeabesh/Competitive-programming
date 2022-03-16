#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	int n; cin >> n;
	vector<int>v(n);
	deque<int>v1, v2;
	for (auto &it : v)cin >> it;

	int i = 0, j =n- 1;
	if (v[i] > v[j]){
		v1.push_back(v[i]);
		i++;

	}
	else{
		v1.push_back(v[j]);
		j--;
	}

	while (i<=j){
		if (v[i] < v[j]){
			v1.push_front(v[i]);
			i++;
		}
		else {
			v1.push_back(v[j]);
			j--;
		}

	}
	i = 0, j = n - 1;
	while (i<=j){
		if (v1[i] < v1[j]){
			v2.push_front(v1[i]);
			i++;
		}
		else {
			v2.push_back(v1[j]);
			j--;
		}

	}

	int c = 1;
	for (int i = 0; i < n; ++i) {
		if (v[i] == v2[c-1]){
			c++;
		}
	}
	if (n-c>=1){
		cout << "-1" << endl;
		
		return;
	}

	for (auto a : v1)cout << a << " ";
	cout << endl;

}


int main() {
	  run();
	int t; cin >>t;
	while (t--){
	
	    solve();
	
  }
}
==============================================other Solutions============
#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	int n; cin >> n;
	vector<int>v(n);
	for (auto &a : v)cin >> a;
	if (v[0] != n&&v[n - 1] != n){
		cout << "-1" << endl;
		return;
	}
	cout << n << " ";
	for (int i = n - 1; i >= 0; --i){
		if (v[i] != n)cout << v[i] << " ";
	}
	cout << endl;
}


int main() {
	  run();
	int t; cin >>t;
	while (t--){
	    solve();
	
  }
}
