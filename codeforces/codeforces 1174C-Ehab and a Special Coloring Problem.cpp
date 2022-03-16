#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

const int N = 1e6 + 9;
int sieve[N];

void clc_sieve(){
	for (int i = 2; i < N; ++i)sieve[i] = -1;
	int idx = 1;
	for (int i = 2; i<N; ++i){
		if (sieve[i] == -1){
			sieve[i] = idx;
			for (int j = i * 2; j < N; j += i){
				sieve[j] = idx;
			}
			idx++;
		}


	}
	

}

void solve() {
	int n; cin >> n;
	for (int i = 2; i <= n; ++i)cout << sieve[i] << " ";
}

int main() {

	run();
	clc_sieve();
	solve();

}