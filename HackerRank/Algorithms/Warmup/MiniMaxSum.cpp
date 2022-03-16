void miniMaxSum(vector<int> arr) {
	sort(arr.begin(), arr.end());
	long long mn = 0, mx = 0;
	for (int i = 0; i<(int)arr.size() - 1; ++i)mn += arr[i];
	for (int i = 1; i<(int)arr.size(); ++i)mx += arr[i];
	cout << mn << " " << mx;
}