#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n, m, a;
	cin >> n >> m >> a;

	long long int x = ceil((n * 1.0) / a * 1.0);
	long long int y = ceil(m * 1.0 / a * 1.0);
	long long int ans = x * y;
	cout << ans << endl;

}