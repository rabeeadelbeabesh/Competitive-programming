string gg(int n){
	string f = "", t = "";
	stringstream ss;
	if (n< 9) {
		ss << "0" << n << ":";
		ss >> t;
		f += t;
	}
	else {
		t = "";
		ss << n << ":";
		ss >> t;
		f += t;
	}
	return f;
}
string timeConversion(string s) {

	stringstream ss(s);
	int h = 0, m = 0, sc = 0;
	char ch, cc;
	ss >> h >> cc >> m >> cc >> sc >> ch >> cc;
	string ans = "";
	if (ch == 'A'){
		if (h == 12){
			ans = gg(0) + gg(m) + gg(sc).substr(0, (int)gg(sc).size() - 1);


		}
		else {
			ans = gg(h) + gg(m) + gg(sc).substr(0, (int)gg(sc).size() - 1);

		}
	}
	else{
		if (h<12)
			ans = gg(12 + h) + gg(m) + gg(sc).substr(0, (int)gg(sc).size() - 1);
		else     ans = gg(h) + gg(m) + gg(sc).substr(0, (int)gg(sc).size() - 1);
	}
	return ans;
}