int nonDivisibleSubset(int k, vector<int> s) {
	map<int, int>mp;
	for (auto a : s) mp[a%k]++;
	int ans = 0;
	if (mp[0]>0) ans++;
	int z = 0;
	for (int i = 1; i <= (k / 2); ++i){
		z = 0;
		if (i == (k - i)) z = 1;
		else{
			if (mp.find(i) != mp.end())z = max(mp[i], z);
			if (mp.find(k - i) != mp.end())z = max(mp[k - i], z);
		}
		ans += z;
	}

	return  ans;
}