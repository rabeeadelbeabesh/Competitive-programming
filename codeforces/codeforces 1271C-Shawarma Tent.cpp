#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void run() {

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
void solve() {
	int n, sx,cnt=0, sy; cin >> n >> sx >> sy;
	int c1=0, c2=0, c3=0, c4=0, x1=0, x2=0, y1=0, y2=0;
	for (int i = 0; i < n; ++i){
	
		int x, y; cin >> x >> y;
		if (x == sx&&y >sy)y1++;
		else if (x == sx&&y <sy)y2++;
		else  if (x <sx&&y == sy)x1++;
		else if (x >sx&&y == sy)x2++;
		else if (x < sx&&y > sy)c1++;
		else if (x >sx&&y >sy)c2++;
		else if (x <sx&&y <sy)c3++;
		else if(x >sx&&y <sy)c4++;
	}
		vector<pair<int, pair<int, int>>>v(4);
		v[0] = { c3 + y2 + c4, { sx, sy-1 }};
		v[1] = { c2 + y1 + c1, { sx, sy+1 } };
		v[2] = { c1 + x1+ c3, { sx-1, sy} };
		v[3] = { c2+ x2 + c4, { sx +1, sy } };
		sort(all(v));
		
		cout << v[3].first << endl;
		cout<<  v[3].second.first << " " << v[3].second.second << endl;
}
int main() {
	run();
	solve();
	
	
}