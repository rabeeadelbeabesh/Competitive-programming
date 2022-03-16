class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=1e4+9;
       vector<int>D(n,0);
        for(auto a:nums)D[a]++;
        int ans=0;
        for(int i=2;i<n;++i) {
            D[i]=max((i*D[i])+D[i-2],D[i-1]);
        }
        return D[n-1];
    }
};