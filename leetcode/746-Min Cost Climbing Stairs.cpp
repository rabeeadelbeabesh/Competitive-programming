class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
    
     int n = cost.size();
        vector<int>D(n + 9, 0);
        for (int i = n-1; i>=0; --i) {
            D[i] = cost[i]+ min(D[i+2],D[i+1]);

        }
       
        return min(D[1], D[0]);
        
    }
};
----------------------------------------------
class Solution {
public:
	int minCostClimbingStairs(vector<int>& cost) {

		int n = cost.size();
		for (int i = 2; i<n; i++) {
			cost[i] += min(cost[i - 2], cost[i - 1]);

		}

		return min(cost[n - 1], cost[n - 2]);

	}
};