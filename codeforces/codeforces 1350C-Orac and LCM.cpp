#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N = 200009;
int lpf[N];
map<int, int>mp;
vector<int>prims;
long long power(long long x, long long y){
	long long ans = 1;
	while (y>0){
		if (y & 1)ans = (ans*x) ;
		x = (x*x) ;
		y /= 2;
	}
	return ans;
}
void clc_sieve(){
	for (int i = 0; i < N; ++i)lpf[i] = INT_MAX;
	for (int i = 2; i < N; ++i){
		if (lpf[i] == INT_MAX){
			for (int j = i; j < N; j += i){
				lpf[j] = min(lpf[j], i);
			}
		}
	}
	for (int i = 2; i < N; ++i) if (lpf[i] == i)prims.push_back(i);

}
void clc_factor(int n){
	while (n>1){
		int p = lpf[n];
		int c = 0;
	while (n%p==0){
		c++;
		n /= p;
     }
	if (c > 0){
		int te = 1;
		for (int i = 1; i <= c; ++i){
			te *= p;
			mp[te] ++;
		}
		
	}

   }

}
void solve() {
	
	int n,x; cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> x;
		clc_factor(x);
	}
	long long ans = 1;
	long long test;
	for (auto a : prims){
		
		for(int i=18;i>0;i--){
			test = power(a, i);
			if (mp[test] >= n - 1){
			   
				ans *=test;
				break;
			}
			
		}
	}
	cout <<ans << endl;
}
int main() {
	run();
	clc_sieve();
	solve();
}