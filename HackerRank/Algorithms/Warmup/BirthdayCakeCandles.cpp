int birthdayCakeCandles(vector<int> candles) {
	auto mx = max_element(candles.begin(), candles.end());
	int cnt = 0;
	for (int i = 0; i<(int)candles.size(); ++i){
		if (candles[i] == *mx) cnt++;
	}

	return  cnt;

}