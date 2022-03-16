int simpleArraySum(vector<int> ar) {
  int sz =(int)ar.size(),ans=0;
  for(int i=0;i<sz;++i) ans+=ar[i];
  
  return  ans;
}