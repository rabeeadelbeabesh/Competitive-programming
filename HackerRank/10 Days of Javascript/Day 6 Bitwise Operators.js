function getMaxLessThanK(n,k){
  let mx=0;
  for(let i=1;i<=n;++i){
    for(let j=i+1;j<=n;++j){
      let z=(i&j);
      if(z<k){
        mx=Math.max(mx,z);
      }
    }
  }
  return mx;
}
