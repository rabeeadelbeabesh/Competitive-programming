int migratoryBirds(vector<int> arr) {
	map<int, int>mp;
	for (auto a : arr) mp[a]++;
	int mx = 0, id = 0;
	for (auto a : mp){
		if (a.second>mx){
			mx = a.second;
			id = a.first;
		}
		if (a.second == mx)id = min(id, a.first);
	}
	return id;
}
