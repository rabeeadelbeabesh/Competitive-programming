int gcd(int x, int y) { return (!y) ? x : gcd(y, x%y); }
int lcm(int x, int y) { return ((x / gcd(x, y))*y); }
int getTotalX(vector<int> a, vector<int> b) {
	int nlcm = 1, ngcd = b[0], ans = 0;
	for (auto k : a) nlcm = lcm(nlcm, k);
	for (auto k : b)ngcd = gcd(ngcd, k);
	int rang = 0;
	while (rang <= ngcd) {
		rang += nlcm;
		if (ngcd%rang == 0)ans++;
	}
	return ans;
}
_____________________________________________________
//anther soluation
int getTotalX(vector<int> a, vector<int> b) {
	int sza = (int)a.size(), sszb = (int)b.size();
	int mx = (*max_element(a.begin(), a.end()), *max_element(b.begin(), b.end()));
	vector<int>fc;
	for (int i = 1; i*i <= mx; ++i){
		if (mx%i == 0){
			fc.push_back(i);
			if (mx / i != i) fc.push_back(mx / i);
		}
	}
	int ans = 0;
	bool f = 1;
	for (auto k : fc){
		f = 1;
		for (auto i : a) if (k%i != 0) f = 0;
		for (auto j : b) if (j%k != 0)f = 0;
		if (f)ans++;
	}

	return  ans;

}
