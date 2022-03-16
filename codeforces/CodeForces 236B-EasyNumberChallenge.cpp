//https://codeforces.com/contest/236/problem/B
#include<bits/stdc++.h>
int divesor[1000001 + 10];
int main()
{
	file();
	ll a, b, c;
	cin >> a >> b >> c;
	for (int i = 1; i < (1000001 + 10); i++) {
		for (int j = i; j < (1000001 + 10); j += i) {
			divesor[j]++;
		}
	}
	ll sum = 0;
	ll test = 0;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			for (int k = 1; k <=c; k++)
			{
				test = (i*j*k);
				sum += divesor[test];
				//cout << test << " " << sum << endl;

			}
		}
	}
	ll mod = 1073741824;
	cout << sum%mod << endl;
}