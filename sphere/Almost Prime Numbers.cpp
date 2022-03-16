#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

const int N = 1e5+ 9;
bool seive[N];
int comps[N];
void clc_seive(){
	seive[1]=seive[0] = 1;
	for (int i = 2; i < N; ++i){
		if (seive[i] == 0){
			for (int j = 2 * i; j < N; j += i){
				seive[j] = 1;
			}
		}
	}
	comps[0] = 4, comps[1] = 6, comps[2] = 8;
	for (int j = 3, i = 9; i < N; i += 2){
		if (seive[i] == 1){
			comps[j] = i;
			j++;
		}
		comps[j] = i + 1;
		j ++;
	}

}
void solve(){
	clc_seive();
	int t; cin >> t;
	vector<bool>v;
	for(int q=1;q<=t;++q){
		int n, k; cin >> n >>k;
		vector<int>arr(k);
		for (int i = 0; i < k; ++i)cin >> arr[i];
		int ans = 0;
		for (int j = 0; comps[j] <= n; j++){
			int f = 1;
			for (int i = 0; i < k; ++i){
				if (comps[j] % arr[i] == 0){
					f = 0;
					break;
				}
			}
			if (f)ans++;
		}
		cout <<"Case "<< q<<": "<< ans << endl;
	}
}

int main() {
	run();

	solve();
}