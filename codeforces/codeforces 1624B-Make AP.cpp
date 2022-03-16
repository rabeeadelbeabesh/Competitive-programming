#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
bool check(long long a, long b, long long c){
	if (a >= b&&b >= c){
		return (a - b) == (b - c);
	}
	else if (c >= b&&b >= a){
		return (c - b) == (b - a);
	}
	else return false;
}
void solve(){
	long long a, b, c;
	cin >> a >> b >> c;

	if ((a+c) <= b * 2){
	
		long long aa =( (2 * b - c) / a)*a;
		long long cc = ((2 * b - a) / c)*c;

		if (check(aa, b, c) || check(a, b, cc)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;

	}
	else{
		b = (((a + c) / 2) / b)*b;
	
		if (check(a, b, c)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}


}


int main() {
	run();
	int t; cin >> t;
	while (t--){

		solve();

	}
}