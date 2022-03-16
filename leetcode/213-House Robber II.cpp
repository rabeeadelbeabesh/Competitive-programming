class Solution {
public:
    int rob2(vector<int>& nums) {
        int n=nums.size();
        vector<int>D(n + 1,0);
		D[1] = nums[0];
        for (int i = 2; i <= n; i++) {
          D[i]= max(D[i - 1], D[i - 2] + nums[i - 1]);
        }                  
        return D[n];
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
       vector<int>num2(n-1);
        for(int i=1;i<n;++i)num2[i-1]=nums[i];
        nums.pop_back();
        
        return max(rob2(nums),rob2(num2));
        
    }
};