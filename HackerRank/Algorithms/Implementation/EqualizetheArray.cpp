int equalizeArray(vector<int> arr) {
   int ans=0;
   map<int,int>mp;
   for(auto a:arr)mp[a]++;
   int mx=0,ele=0;
   for(auto a:mp) if(a.second>mx){mx=a.second ; ele=a.first;}
   for(auto a:mp)if(ele!=a.first)ans+=a.second;
   
   return  ans;
}