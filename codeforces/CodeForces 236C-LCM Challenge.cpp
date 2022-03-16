#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
long long gcd(long long x, long long y) { return (!y) ? x : gcd(y, x%y); }
long longlcm(long long x, long long y) { return ((x / gcd(x, y))*y); }
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

long long clc_lcm(long long x, long long y, long long z){

	return lcm(x, lcm(y, z));
}


void solve() {
	long long  n; cin >> n;
	if (n <= 2){
		cout <<n << endl;
		return;
	}
    long long  x=n, y = n - 1, z = n - 2;
    long long  mx = lcm(n - 2, lcm(n, n - 1));

	for (int i = n -3; i >= 0; --i){
		long long c1 = clc_lcm(x, y,i);
		long long c2 = clc_lcm(x, z, i);
		long long c3 = clc_lcm(z, y, i);
		if (c1 > mx){
			mx = c1;
			z =i;
		}
		else if (c2 > mx){
			mx = c2;
			y = i;


		}
		else	if (c3 > mx){
			mx = c3;
			x =i;
		}
	}
	
	cout << mx << endl;
	
}

int main() {

	run();

     solve();
		
}