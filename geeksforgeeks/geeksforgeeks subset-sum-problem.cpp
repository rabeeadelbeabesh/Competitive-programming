class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){  
        bool D[N+9][sum+9];
      for(int i=0;i<=N;i++){
          for(int j=0;j<=sum;++j){
              if(i==0||j==0){
                  (i==0)?D[i][j]=0:D[i][j]=1;
                  (i==0&&j==0)?D[i][j]=1:D[i][j];
                  continue ;
              }
               D[i][j]=0;
              D[i][j]|=D[i-1][j];
              if(arr[i-1]<=j)
               D[i][j]|=D[i-1][j-arr[i-1]];
              
          }
      }
   
      return D[N][sum];
    }
};