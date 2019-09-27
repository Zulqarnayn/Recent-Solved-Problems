#include <bits/stdc++.h>
using namespace std;

#define lld long long int

int main(){
	lld n, k;
	cin >> n >> k;
	lld f_half = n / 2 + (n % 2 == 1 ? 1 : 0);
	lld s_half = f_half + 1;
	if(k <= f_half)
		cout << 2 * k - 1 << endl;
	else {
		lld mod = (k - f_half);
		cout << 2 * mod << endl;
	}
}