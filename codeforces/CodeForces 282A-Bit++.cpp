#include<bits/stdc++.h>
using namespace std;
#define endl                          '\n'	
void fun(){
	int n; cin >> n;
	int ans=0;
	string s;
	while (n--){
		cin >> s;
		if (s == "++X"||s=="X++")ans++;
		else ans -= 1;	
	}
	cout<< ans << endl;
}
int main() {
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	fun();
	
}