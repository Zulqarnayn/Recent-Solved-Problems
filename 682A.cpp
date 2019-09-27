#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	long long int div_n[5], div_m[5];
	memset(div_n, 0, sizeof(div_n));
	memset(div_m, 0, sizeof(div_m));
	cin >> n >> m;

	for(int i = 1; i <= n; i++){
		div_n[i % 5]++;
	}

	for(int i = 1; i <= m; i++){
		div_m[i % 5]++;
	}
	for(int i = 0; i < 5; i++)
		cerr << div_n[i] << ' ' << div_m[i] << endl;

	long long int ans = div_n[0] * div_m[0];
	ans += div_n[1] * div_m[4];
	ans += div_n[2] * div_m[3];
	ans += div_n[3] * div_m[2];
	ans += div_n[4] * div_m[1];
	cout << ans << endl;
}