#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, y, z, ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x >> y >> z;
		int sol = x + y + z;
		(sol >= 2) ? ans++ : ans;
	}
	cout << ans << "\n";
}