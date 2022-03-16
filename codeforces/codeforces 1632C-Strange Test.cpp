#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase() {
	int a,b; cin >> a>>b;
	int t = b,c=0,c2=0;
	for (int i = 32; i >= 0; i--) {
		while (((a >> i) & 1) == 1 && ((t>> i) & 1) != 1) {
			c++;
			t++;
		}
	}

	if (a != t)c++;

	while ((a|b)!=b){
		a++;
		c2++;
	}
	if (a != b)c2++;
	cout << min(c2, c ) << endl;
}
int main() {
	run();	
    int t; cin >> t; while (t--)
		RunCase();
}