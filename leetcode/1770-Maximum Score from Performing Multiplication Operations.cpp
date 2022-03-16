class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int m=multipliers.size(),n=nums.size();
        vector<vector<int>>D(m+9,vector<int>(m+9));
        for(int i=m-1;i>=0;i--){
            
            for(int L=i;L>=0;L--){
               int r=n-1-(i-L),t=multipliers[i];
                D[i][L]=max(D[i+1][L]+nums[r]*t,D[i+1][L+1]+nums[L]*t);
            }
        }
        
        return D[0][0];
        
    }
};