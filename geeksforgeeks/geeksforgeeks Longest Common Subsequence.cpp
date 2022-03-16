class Solution
{
    public:
    int lcs(int x, int y, string s1, string s2)
    {
      int  D[x+8][y+8];
	  for (int i = 0; i <= x; ++i){
		for (int j = 0; j <= y; ++j){
			if (i == 0 || j == 0)D[i][j] = 0;
			else{
				
				 D[i][j] = max({D[i - 1][j - 1]+(s1[i - 1] == s2[j - 1]), D[i - 1][j], D[i][j - 1] });
			}
		}
	}
	   return D[x][y];
    }
};
