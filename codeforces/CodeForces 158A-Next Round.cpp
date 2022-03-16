#include<bits/stdc++.h> 
using namespace std;
int n,k,c,a[51];
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
 
	for(int i=0;i<n;i++){
		if(a[i]>=a[k-1]&&a[i]!=0)
			c++;
	}
	cout<<c<<"\n";
 
	return 0;
}