#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase(){
	int n; cin >> n;
	string s, t; cin >> s >> t;
	int cnt = 0;
	for (int i = 0; i < n; ++i){
		if (t[i] == '1'){
			if (s[i] == '0') {
				s[i] = '#';
				cnt++;
			}
			else if (i - 1 >= 0 && s[i - 1] == '1'){
				s[i-1] = '#';
				cnt++;
			}
			else if (i +1<n && s[i+1] == '1'){
				s[i +1] = '#';
				cnt++;
			}
		}
	}
	cout << cnt <<endl;;
}
int main() {
	run();
	int t; cin >> t; while (t--)
		RunCase();


}