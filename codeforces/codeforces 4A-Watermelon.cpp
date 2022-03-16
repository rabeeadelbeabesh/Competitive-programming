#include<bits/stdc++.h>
using namespace std;
#define endl  '\n' 
void solve() {
	int n;
	cin >> n;
	if (n == 2)
	{
		cout << "NO ";
		return;
	}
	if (n % 2 == 0)
		cout << "YES";
	else
		cout << "NO ";

}

int main() {
		solve();
}