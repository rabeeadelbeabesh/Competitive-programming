//===========binary search Solutions========
#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
long long a, b;
bool can(long long n){

	return n <= min(a, b)&& 4*n<=(a+b);
}
long long  BS(){
	long long l = 0, r = 1e9 + 9, mid, ans = 0;
	while (l <= r){
		mid = (l + r) / 2;
		if (can(mid)){
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}

	return ans;
}
void solve() {
	cin >> a >>b;
	cout << BS() << endl;
}


int main() {
	  run();
	int t; cin >>t;
	while (t--){
	    solve();
	
  }
}
=========================================math Solutions======================
#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve(){
	long long a, b; cin >> a >> b;
	cout << min({ a, b, (a + b) / 4 }) << endl;;
}
int main() {
	  run();
	int t; cin >>t;
	while (t--){	
	    solve();
	
  }
}