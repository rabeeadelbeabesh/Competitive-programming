class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       	int oo = -100000000;
    	int D[n+6][W+9] = { 0 };
    	D[0][0] = 0;
    	for (int i = 0; i <= n; ++i){
    		for (int j = 0; j <= W; ++j){
    			if (i == 0 && j != 0)D[i][j] = oo;
    			else {
    			   if (i == 0 && j == 0)continue;
    				if (j - wt[i-1] >= 0)
    					D[i][j] = max(D[i - 1][j - wt[i-1]] + val[i-1], D[i - 1][j]);
    				else  D[i][j] = D[i - 1][j];
    			}
    
    		}
    	}

		for (int j = 0; j <= W; ++j) D[0][0] = max(D[0][0], D[n][j]);
    	return   D[0][0];
    }
};
