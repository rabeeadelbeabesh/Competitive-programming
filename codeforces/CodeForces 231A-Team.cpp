#include <bits/stdc++.h>
using namespace std;
void main()
{
     std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,x,y,z;
    cin>>n;
    long long  c=0;
   for(int i=0;i<n;++i){

       cin>>x>>y>>z;
       if((x+y+z)>=2)
        c++;
    }
    cout<<c;

}