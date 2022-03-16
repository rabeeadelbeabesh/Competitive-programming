class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
         int m=text2.size();
        vector<vector<int>>D(1009,vector<int>(1009,0));
        for(int i=1;i<=n;++i){
             for(int j=1;j<=m;++j){
                 if(text1[i-1]==text2[j-1])
                     D[i][j]=1+D[i-1][j-1];
                 D[i][j]=max({D[i][j],D[i-1][j],D[i][j-1]});
             }
        }
        return D[n][m];
    }
};