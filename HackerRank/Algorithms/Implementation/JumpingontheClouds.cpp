int jumpingOnClouds(vector<int> c) {
  int cnt=0,ans=0;
  int sz=(int)c.size();
  while(cnt<(sz-1)){
      if(cnt+2<sz&&c[cnt+2]==0){
          ans++;
          cnt+=2;
      }
      else if(cnt+1<sz&&c[cnt+1]==0){
          ans++;
          cnt+=1;
      }
  }
  return  ans;
}
