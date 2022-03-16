#include<bits/stdc++.h>
using namespace std;
#define sz(s)                (int)s.size()
#define endl  '\n' 
const int N = 1e6 + 9;
bool sieve[N];
vector<int>prims;
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
long long power(long long x, long long y){
	long long ans = 1;
	while (y>0){
		if (y & 1)ans = (ans*x) ;
		x = (x*x);
		y /= 2;
	}
	return ans;
}
void clc_sieve(){

	for (int i = 2; i*i <= N; ++i){
		if (sieve[i] == 0){
			for (int j = i * 2; j < N; j += i){
				sieve[j] = 1;
			}
		}


	}
	for (int i = 2; i < N; ++i)if (sieve[i] == 0)prims.push_back(i);

}

map<long long, int> clc_factor(long long n){
	map<long long, int>mp;
	int i = 0;
	while (i<sz(prims) && prims[i] * prims[i] <= n){
		while (n%prims[i] == 0){
			mp[prims[i]]++;
			n /= prims[i];

		}
		i++;

	}
	if (n > 1) mp[n]++;

	return mp;

}

bool check_prim(long long n){

	for (long long i = 2; i*i <= n; ++i){
		if (n%i == 0) return false;
	}


	return true;

}
void solve() {
	long long n, p;
	cin >> n >> p;
	if (check_prim(p)){
		if (n == 1)
			cout << p << endl;
		else
			cout << 1 << endl;
		return;
	}
	map<long long, int>mp = clc_factor(p);
	long long ans = 1;
	for (auto a : mp){
		long long te = a.second / n;

	     	ans *= power(a.first, te);
		}
	cout << ans << endl;
}

int main() {

	run();
	clc_sieve();
	solve();

}
