#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

const  int N = 1e7+1;
int n, d;
vector<int>prim;
bool  sieve[N];
void clc_sieve(){

	for (int i = 2; i<N; ++i){
		if (sieve[i] == 0){
			for (int j = i; j < N; j += i){
				sieve[i];
			}
		}
		
		 
	}
	for (int i = 2; i<N; ++i)prim.push_back(i);

}

void clc_factor(map<int, int >&mp,int n){

	int idx = 0;
	while (idx<sz(prim)&&(prim[idx] * prim[idx]) <= n){
		while (n%prim[idx]==0){
			n /= prim[idx];
			mp[prim[idx]]++;
		}
		idx++;
	}
	if (n>1)mp[n]++ ;
	
}
void solve() {
	map<int, int >mp2,mp1;
	 clc_factor(mp2,d);

	 for (int i = 2; i <= n; ++i)
	      clc_factor(mp1,i);
	
	long long ans = 1;
	for (auto a : mp2){
		if (mp1[a.first] <= 0){
			cout << 0 << endl;
			return;
		}
		else if (mp1[a.first] - a.second <0){
			cout << 0 << endl;
			return;
		}
		else {
			if ((mp1[a.first] - a.second )==0)
			     ans*=( mp1[a.first] - a.second+1);

			 mp1[a.first] -= a.second;

		}
	}
	for (auto a : mp1)if (a.second>0) ans *= (a.second+1);
	
	cout << ans << endl;
	
}

int main() {

	run();
	clc_sieve();

	while (cin>>n>>d){
		if (n == 0 && d == 0)break;
		d = abs(d);
		solve();
	}
	

}