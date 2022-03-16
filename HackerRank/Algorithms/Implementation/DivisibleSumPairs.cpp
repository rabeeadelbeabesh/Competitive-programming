int divisibleSumPairs(int n, int k, vector<int> ar) {
    map<int, int>mp;
    for (auto a : ar) mp[a%k]++;
    int ans = 0;
    if (mp[0]>0) ans+=(mp[0]*(mp[0]-1))/2;
   
    for (int i = 1; i <= (k / 2); ++i){
      if(i!=(k-i)&&mp.find(i) != mp.end()&&mp.find(k - i) != mp.end())
          ans += (mp[k - i] *mp[i]);
          
     if(i==(k-i)&&mp.find(i) != mp.end())ans+=(mp[i]*(mp[i]-1))/2;
    }

    return  ans;
}
