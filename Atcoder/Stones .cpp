#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N = 1e5 + 9;
int n, k;
int G[109];
bool D[N];
void RunCase() {
	cin >> n >> k;
	for (int i = 1; i <= n; ++i)cin >> G[i];

	for (int i = 0; i<N; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (i - G[j] >= 0 && D[i - G[j]] == 0)
				D[i] = 1;
		}
	}
	cout << (D[k]==1? "First" : "Second") << endl;
}

int main() {
 	run();
        RunCase();
	
}