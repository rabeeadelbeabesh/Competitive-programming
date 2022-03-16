void plusMinus(vector<int> arr) {
	cout << fixed << setprecision(5);
	int sz = (int)arr.size(), p = 0, n = 0, zero = 0;
	for (int i = 0; i<sz; ++i){
		(arr[i]>0) ? p++ : (arr[i] != 0) ? n++ : zero++;
	}
	cout << (double)p / sz << '\n';
	cout << (double)n / sz << '\n';
	cout << (double)zero / sz << '\n';
}
