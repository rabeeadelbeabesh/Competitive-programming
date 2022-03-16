int birthday(vector<int> s, int d, int m) {
	int sz = (int)s.size();
	int sum = 0, ans = 0;
	if (sz<m)return 0;
	for (int i = 0; i<m; ++i)sum += s[i];
	if (sum == d)ans++;
	for (int i = m; i<sz; ++i){
		sum -= s[i - m];
		sum += s[i];
		if (sum == d)ans++;
	}
	return ans;
}
