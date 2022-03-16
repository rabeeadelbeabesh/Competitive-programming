#include "stdafx.h"
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
#define sz(s)                (int)s.size()
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int t,n;
void solve() {
	vector<int>v(n),vv;
	set<vector<int>, greater<vector<int>>>st;
	for (auto &it : v)cin >> it;
	int sum,f=1;
	for (int i = (1 << n)-1; i>0; --i){
	    sum = 0;
		vv.clear();
		for (int j = 0; j < n; ++j){
		
			if (i&(1 << j)){
				//cout << i<< endl;
				sum += v[j];
				vv.push_back(v[j]);
			}
		
		}
		
		if (sum==t){

			st.insert(vv);
		}

	}
	for (auto b : st){
		for (int a = 0; a < sz(b); ++a){
			f = 0;
			cout << b[a];
			if (a + 1 < sz(b)) cout << "+";

		}
		cout << endl;
	}
	

	if (f)
		cout << "NONE"<< endl;;


}
int main() {
	run();

	while (cin >>t>>n){
		if (t == 0 && n == 0)break;
		cout << "Sums of " << t<< ":" << endl;
	    solve();
	
	}
}