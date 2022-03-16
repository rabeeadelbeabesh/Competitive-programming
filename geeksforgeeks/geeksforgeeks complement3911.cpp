class Solution{
public:
    vector<int> findRange(string str, int n) {
	int D[n+9];
	D[0] = 0;
	int c = 0;
	for (int i = 1; i <= n; ++i){
		(str[i - 1] == '1') ? c = -1 : c = 1;
		D[i] = max(c + D[i - 1], c);
	}
	int dx = 1, mx = -1;
	for (int i = 1; i <= n; ++i) 
	if (D[i] > mx){
		mx = D[i]; dx = i;
	}
	if (mx<0) return {-1};
	else {
		int j = dx;
		while (j>=1&&D[j] >=0) j--;
	         return {j+1,dx};
	}
        // code here
    }
};
