#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void solve() {	
	long long n;
	cin >> n;
	long long cnt = 0;
	for (long long i = 1; i*i <= n; ++i){
		if (n%i == 0){
			cnt++;
			if ((n / i) != i)cnt++;
		}
	}
	cout << cnt << endl;

}

int main() {

	run();
	solve();
		
}