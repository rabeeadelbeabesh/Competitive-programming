class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
          int m=matrix[0].size();
          vector<vector<int>>D(309,vector<int>(309,0));
        int ans=0;
        for(int i=1;i<=n;i++){
             for(int j=1;j<=m;j++){
              if(matrix[i-1][j-1]=='1')
                  D[i][j]=1+min({ D[i-1][j], D[i][j-1], D[i-1][j-1]});
                 
                 ans=max(ans,D[i][j]);
             }
            
        }
        
        return ans*ans;
    }
};