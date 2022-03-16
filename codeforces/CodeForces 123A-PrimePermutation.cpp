#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 

const int N = 1e3 + 9;
vector<int>prime;
bool seive[N];
void clc_seive(){
	for (int i = 2; i*i< N; ++i){
		if (seive[i]==0)
			for (int j = 2*i; j < N; j += i){
				seive[j] = 1;
			}
	}
	for (int i = 2; i < N; ++i)if (seive[i] == 0)prime.push_back(i);
}
void solve(){
	clc_seive();
	string s; cin >> s;
	int n = (int)s.size();;
	
	bool check = 1;
	char ch = -1;;
	int cnt = 0;
	vector<bool>v(n+9,0);
	for (int i = 0; prime[i]<=n/2; ++i){
		for (int j = prime[i]; j<=n; j += prime[i]){
			if (v[j] == 0)
				v[j] = 1;
		}
	}

	
	for (auto a : v) if (a) cnt++;

	map<char, int>mp;
	for (auto a : s)mp[a]++;
	
	for (auto a : mp){
	
		if (a.second >= cnt){
			check = 0; ch = a.first;
			break;
		}
	}

	if (check){
		cout << "NO" << endl; return;
	
	}
	string ss = "", s2 = "";
	for(int  i=0;i<cnt;i++){
		ss.push_back(ch);
	}
	mp[ch] -= cnt;
	for (auto a : mp) {

		for (int i = 0; i < a.second; ++i) s2.push_back(a.first);
	}
	cout << "YES" << endl;
	int i = 0, j = 0;
	for (int k = 1; k<=n; ++k){
		if (v[k] == 0){ cout << s2[j]; j++; }
		else { cout << ss[i]; i++; }

	}
	cout << endl;
}
int main() {
	
	solve();
}