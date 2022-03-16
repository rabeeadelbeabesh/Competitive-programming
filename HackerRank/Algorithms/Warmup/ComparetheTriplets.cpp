vector<int> compareTriplets(vector<int> a, vector<int> b) {
  int A=0,B=0;
   for(int i=0;i<(int)a.size();++i) {
   if(a[i]!=b[i]) a[i]>b[i]?A++:B++;
   }
   return {A,B};
}