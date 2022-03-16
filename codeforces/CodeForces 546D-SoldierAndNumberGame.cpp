#include<bits/stdc++.h>
using namespace std;
#define endl                          '\n'	
const int N = 5000009;
int sieve[N];
void init(){
	sieve[0] = sieve[1] - 0;
	for (int i = 2; i < N; ++i){
		if (sieve[i] == 0){
			sieve[i]++;
			for (int j = i * 2; j < N; j += i){

				sieve[j] = 1 + sieve[j / i];
			}


		}

	}
	for (int i = 2; i < N; ++i)sieve[i] += sieve[i - 1];
}
void solve(){
	init();
	int t; cin >> t;
	while (t--)
	{
		int a, b; cin >> a >> b;
		cout << sieve[a] - sieve[b] << endl;
	}


}
int main(){


		solve();
}