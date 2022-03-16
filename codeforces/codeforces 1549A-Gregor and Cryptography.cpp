#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase(){
	long long n; cin >> n;
	if (n == 5)cout << 2 << " " << 4 << endl;
	else {
		cout << 2 << " " << n / 2 << endl;
	}
	
}
int main() {
	run();
	int t; cin >> t; while (t--)
		RunCase();


}