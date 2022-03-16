#include <bits/stdc++.h>
using namespace std;

main()
{
  std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        if(s.size()>10)
        {
            cout<<s[0]<<s.size()-2<<s[s.size()-1];
        }
        else
            cout<<s;
        if(i+1<t)
            cout<<"\n";

    }

}
 