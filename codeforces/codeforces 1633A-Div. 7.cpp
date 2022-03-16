#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase() {
	int n; cin >> n;
	if(n % 7 == 0) {
		cout << n << endl;
		return;
	}
	for (int i = 0; i < 10; i++) {
		int c = (n / 10) * 10 + i;
		if ( c% 7 == 0) {
			cout << c << endl;
			return;
		}
	}
}


int main() {
	run();
	
    int t; cin >> t; while (t--)
		RunCase();
}