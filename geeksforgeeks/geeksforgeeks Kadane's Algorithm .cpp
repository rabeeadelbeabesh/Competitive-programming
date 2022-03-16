class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
    	long long D[n+9];
    	D[0] = 0;
    	for (int i = 1; i <= n; ++i){
    		D[i] = max(arr[i - 1] + D[i - 1],(long long) arr[i - 1]);
    	}
    	for (int i = 1; i <= n; ++i) D[1] = max(D[1], D[i]);
    	return D[1];
        
    }
};