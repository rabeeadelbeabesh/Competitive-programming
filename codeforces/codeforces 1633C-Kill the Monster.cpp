#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase() {
	long long hc, dc, hm, dm, k, a, w, t1 = 0, t2 = 0;;
	cin >> hc >> dc >> hm >> dm >> k >> w>> a;
	dc += (k*w);
	t1 = (hc / dm) + ((hc%dm != 0) ? 1 : 0);
	t2 = (hm / dc) + ((hm%dc != 0) ? 1 : 0);

	if (t2<=t1) {
		cout << "YES" << endl;
		return;
	}
	for (int i = 0; i < k; ++i) {
		hc += a;
		dc -= w;
		t1 = (hc / dm) + ((hc%dm != 0) ? 1 : 0);
		t2 = (hm / dc) + ((hm%dc != 0) ? 1 : 0);
		if (t2 <= t1) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;

}
int main() {
	run();
	int t; cin >> t; while (t--)
		RunCase();
}