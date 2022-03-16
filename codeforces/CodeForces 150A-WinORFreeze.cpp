#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
vector<long long >prim;
void divsor(long long n){
	long long  sq = sqrt(n);
	for (int i = 2; i<= sq; ++i){
		while(n%i == 0){
			prim.push_back(i);
			n /= i;
		}
	
	}
	if (n >1)prim.push_back(n);
}
void solve(){
	long long n; cin >> n;
	divsor(n);
	int cnt = (int)prim.size();
	if (n == 1 || cnt==1){
		cout << 1 << "\n" << 0 << endl;
		return;
	}
	if (cnt > 2){
		cout << 1 << "\n" << prim[0] * prim[1] << endl;
	}
	else cout << 2 << endl;
}
int main() {
	run();
	solve();
}