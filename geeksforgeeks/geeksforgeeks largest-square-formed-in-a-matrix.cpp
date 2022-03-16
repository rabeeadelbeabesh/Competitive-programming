class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        
        int D[59][59];
        
        int ans=0;
        for(int  i=0;i<=n;++i){
            for(int j=0;j<=m;++j){
                if(i==0||j==0) {
                    D[i][j]=0;
                    continue ;
                }
                D[i][j]=0;
                if(mat[i-1][j-1]==1)
                D[i][j]=min({D[i-1][j],D[i][j-1],D[i-1][j-1]})+1;
                ans=max(ans ,D[i][j]);
            }
        }
        return ans;
    }
};