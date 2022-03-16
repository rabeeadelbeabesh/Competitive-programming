long repeatedString(string s, long n) {
    int cnt =0;
    int sz=(int)s.size();
  for(auto a:s) if(a=='a')cnt++;
   long ans =(n/sz)*cnt ;

   for(int i=0;i<=(n%sz)-1;++i) if(s[i]=='a')ans++;
   
   return ans;
}