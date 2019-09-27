#include <bits/stdc++.h>
using namespace std;

#define lld long long int

int main()
{
	long long int n, m;

	cin >> n >> m;
	pair <int, long long int> pr[m + 2];
	long long int x, y;
	for(int i = 0; i < m; i++){
		cin >> x >> y;

		pr[i] = {y, x};
	}
	sort(pr, pr + m);

	lld sum = 0;
	for(int i = m - 1; i >= 0; i--){
		if(n < 0) break;
		if(pr[i].second < n){
			sum += pr[i].first * pr[i].second;
			n -= pr[i].second;
		}
		else if(pr[i].second >= n && n != 0) {
			sum += pr[i].first * n;
			n = 0;
		}
		cerr << sum << endl;
	}
	cout << sum << endl;
}