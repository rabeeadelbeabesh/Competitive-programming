class Solution {
public:
	int rob(vector<int>& nums) {
		int n = nums.size();
		vector<int>D(n + 1, 0);
		D[1] = nums[0];
		for (int i = 2; i <= n; i++) {
			D[i] = max(D[i - 1], D[i - 2] + nums[i - 1]);
		}
		return D[n];

	}
};