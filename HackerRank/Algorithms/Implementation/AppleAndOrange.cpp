void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
	int CntApple = 0, CntOrange = 0;
	for (int i = 0; i<(int)apples.size(); ++i) { apples[i] += a; if (apples[i] >= s&&apples[i] <= t)CntApple++; }

	for (int i = 0; i<(int)oranges.size(); ++i) { oranges[i] += b; if (oranges[i] >= s&&oranges[i] <= t)CntOrange++; }
	cout << CntApple << "\n" << CntOrange;

}