#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

long long  a, b ,x,y,d;
void extendedEuclid(long long A, long long B) {
	if (B == 0){

		d = A;
		x = 1;
		y= 0;
		return;

	}
	
	extendedEuclid(B, A%B);
	int temp = x;
	x = y;
	y = temp - (A / B)*y;

}
void solve() {	
	extendedEuclid(a, b);
	cout << x << " " << y << " " << (a*x+ b*y) << endl;
}

int main() {

	run();
	while (cin>>a>>b){
		solve();
	}
}