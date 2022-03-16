#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

long long  a, b, x = 0;;

void solve() {	

	string ans = "Stan wins";
	string oth_pl="Ollie wins";
	if (b>a)	swap(a, b);
	while (1){

		if (a%b == 0 || a / b > 1){
			cout << ans <<endl;
			return;
		}
		a %= b;
		swap(a, b);
		swap(ans, oth_pl);
	}
	
}

int main() {

	run();
	while (cin>>a>>b &&a!=0){
		solve();
	}	
}