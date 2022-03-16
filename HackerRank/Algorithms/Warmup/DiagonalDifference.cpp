
int diagonalDifference(vector<vector<int>> arr) {
  int left=0,right=0;
  for(int i=0;i<(int)arr.size();++i){
      for(int j=0;j<(int)arr[0].size();++j){
          i==j?left+=arr[i][j]:left;
      }
  }
  for(int i=0;i<(int)arr.size();++i){
      for(int j=0;j<(int)arr[0].size();++j){
          (i+j==(int)arr.size()-1)?right+=arr[i][j]:right;
      }
  }
  return  abs(left-right);
}