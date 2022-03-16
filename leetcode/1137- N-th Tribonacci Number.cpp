class Solution {
public:
    int tribonacci(int n) {
        vector<int>D(40,0);
        D[1]=D[2]=1;
        for(int i=3;i<=n;++i) D[i]=D[i-1]+D[i-2]+D[i-3];
        
        return D[n];
        
    }
};