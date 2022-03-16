#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void RunCase(){
	int n; cin >> n;
	deque<int>t;
	for (int i = 0; i < n; ++i){
		int x; cin >> x;
		if (t.empty())t.push_back(x);
		else if (t.front() >= x) t.push_front(x);
		else t.push_back(x);
	}
	for (int i = 0; i < n; ++i)cout << t[i] << " ";
		cout << endl;

	
}
int main() {
	run();
	int t; cin >> t; while (t--)
		RunCase();


}