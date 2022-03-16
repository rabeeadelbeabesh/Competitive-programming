vector<int> breakingRecords(vector<int> scores) {
    int cnt_low=0,cnt_high=0,low=scores[0],high=scores[0];
    for(auto a:scores) {
        if(a>high){
            high=a;
            cnt_high++;
        }
          if(a<low){
            low=a;
            cnt_low++;
        }
    }
  return {cnt_high,cnt_low};
}