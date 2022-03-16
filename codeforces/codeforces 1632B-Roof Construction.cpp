#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase() {
	int n; cin >> n;
	vector<int>v;
	int r = n-1, l = 0;
	v.push_back(r);
	for(int k=1;k<n;++k){
		int f = 0;
		for (int i = 31; i >= 0; i--) {
			
			if (((r >> i) & 1) == 1 && (((r - 1) >> i) & 1) == 1) {
				f = 1;
				break;
			}
			if (((r >> i) & 1) == 1 && (((r - 1) >> i) & 1) != 1) {
				f = 2;
				break;
			}
		}
		if (f == 1){
			v.push_back(r - 1);
			r -= 1;
		}
		else {
			v.push_back(l);
			l+=1;
		}

	}
	
	for (auto a : v)cout << a << " ";
	cout << endl;
}
int main() {
	run();
       int t; cin >> t; while (t--)
		RunCase();
}