#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N = 3000 + 9;
int D[N][N];
void RunCase() {
	string s, t, ans = ""; cin >> s >> t;
	int x = s.size(), y = t.size();
	for (int i = 1; i <= x; ++i) {
		for (int j = 1; j <= y; ++j) {

			D[i][j] = max(D[i - 1][j], D[i][j - 1]);
			if (s[i - 1] == t[j - 1]) {
				D[i][j] = max(D[i][j], D[i - 1][j - 1] + 1);
			}
		}
	}
	while (x>0 && y>0) {
		if (D[x - 1][y - 1] >= D[x - 1][y] && D[x - 1][y - 1] >= D[x][y - 1] && D[x][y] - 1 == D[x - 1][y - 1]) {
			if (s[x - 1] == t[y - 1])
				ans.push_back(s[x - 1]);

			y -= 1; x -= 1;
		}
		else {

			(D[x - 1][y] > D[x][y - 1]) ? x -= 1 : y -= 1;
		}
	}
	reverse(ans.begin(),ans.end());
	cout << ans << endl;

}

int main() {
	run();
	RunCase();
}