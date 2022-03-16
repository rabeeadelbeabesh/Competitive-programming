#include<bits/stdc++.h>
using namespace std;
#define endl                          '\n'	
void run() {
	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
} 
ll gcd(ll a, ll b, ll &x, ll &y) {
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	ll x1, y1;
	int d = gcd(b, a % b, x1, y1);
	x = y1;
	y = x1 - y1 * (a / b);
	return d;
}
bool find_soluation(ll a, ll b, ll c, ll &x0, ll &y0, ll &g){
	g = gcd(abs(a), abs(b), x0, y0);
	if (c%g){
		return false;
	}
	x0 *= c / g;
	y0 *= c / g;
	if (a < 0)x0 = -x0;
	if (b < 0)y0 = -y0;
	return true;
}
int main() {
	run();
	ll a, b,c ,c1=0,c2=0 ; 
	while (cin>>c&&c!=0)
	{
		cin >> c1>>a >>c2>> b;
		ll x0, y0, g;
		bool ans = find_soluation(a, b, c, x0, y0, g);

	
		if (ans){
			a /= g; b /= g;
			ll lw = ceil(-(double)x0 / b);
			ll up = floor((double)y0 / a);
			if (lw <= up){
				ll p1 = c1*(x0 + b*lw) + c2*(y0 - a*lw);
				ll p2 = c1*(x0 + b*up) + c2*(y0 - a*up);
				if (p1 < p2)cout << (x0 + b*lw) << " " << (y0 - a*lw) << endl;
				else cout << (x0 + b*up) << " " << (y0 - a*up) << endl;
			}
			else cout << "failed" << endl;
		}
		else cout << "failed" << endl;

	}
	
}