#include <bits/stdc++.h>
using namespace std;
void run()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}
 
main()
{
    run();
    vector<int> v;
    long long  x,y,k=0;
    cin>>x>>y;
    long long z=abs(x-y);
    for(int i=1; i*i<=z; i++)
    {
        if(z%i==0)
            v.push_back(i);
        if(i*i!=z)
            v.push_back(z/i);
    }
    long long  m=(1LL<<62),t=0;
  sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        int q = v[i];
        if(x % q != y % q)
            continue;
        if(x % q == 0)
        {
            long long t = (x * y)/__gcd(x, y);
            if(t < m)
                m = t, k = 0;
        }
        else
        {
            t= ((q - x % q + x) * (q - y% q + y))/__gcd((q - x % q + x), (q - y % q + y));
            if(t<m)
            {
                m=t;
                k=q - x % q;
            }
        }
 
 
    }
    cout<<k;
 
 
}