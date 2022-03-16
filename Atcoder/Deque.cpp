#include "stdafx.h"
#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int N = 3*1e3 + 9;
long long D[N][N];
void RunCase() {
	int n;
	cin >> n;
	 vector<long long>v(n + 9);
	for (int i = 1; i <= n; ++i)cin >> v[i];

	for(int i=n;i>0;--i){
		for (int j = i; j <= n; j++) {
			if (i == j)D[i][j] = v[i];
			else
			D[i][j] = max(v[i] - D[i + 1][j], v[j] - D[i][j-1]);
		 }

	}
	cout << D[1][n] << endl;
}
int main() {
	run();
        RunCase();

}