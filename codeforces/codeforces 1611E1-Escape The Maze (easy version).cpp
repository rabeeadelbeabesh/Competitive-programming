#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
int n, k,u, v;
vector<vector<int>>gr;
vector<int>fr,rot_accs,fr_accs;
vector<int> bfs(vector<int> nodes){
	vector<int>cost(n + 1,INT_MAX);
	queue<int>q;
	for (auto a : nodes){
		q.push(a);
		cost[a] = 0;
	}
	while (!q.empty()){
		int node = q.front();
		q.pop();

		for (auto a : gr[node]){
			if (cost[a] > cost[node] + 1){
				q.push(a);
				cost[a] = cost[node] + 1;
			}
		}

	}
	return cost;
}
void solve(){
	gr.clear(); fr.clear();
	cin >>n >> k;
	gr.resize(n + 1);    fr.resize(k);
	for (auto &it : fr)cin >> it;
	for (int i = 0; i < n - 1; ++i){
		cin >> u >> v;
		gr[u].push_back(v);
		gr[v].push_back(u);
	}
	fr_accs = bfs(fr);
	rot_accs = bfs({1});
	for (int i = 2; i <= n; ++i){
		if (sz(gr[i]) == 1){
			if (rot_accs[i] < fr_accs[i]){
				cout << "YES" << endl;
				return;
			}
		}
	}
	
	cout << "NO" << endl;
}


int main() {
	  run();
	int t; cin >>t;
	while (t--){
	    solve();
  }
}