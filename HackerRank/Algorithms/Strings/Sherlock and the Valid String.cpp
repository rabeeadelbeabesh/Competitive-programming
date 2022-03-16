string isValid(string s) {
   vector<int>v(26,0);
    for (auto a : s)v[a - 'a']++;
    int mn = 0,sm=0;
    map<int, int>mp;
    for (auto a : v)if(a != 0)mp[a]++;
    for (auto a : mp){
        if (a.second > sm){
            sm = a.second;
            mn = a.first;
        }
    }
    sm = 0;
    for (auto &a : v) {
        if (a == 0)continue;
        else if (a < mn){sm += a;a=0;}
        else a -= mn;
    }
    
    for (auto a : v) sm += a;
   if(sm<=1) return "YES";
   else return "NO";
}
