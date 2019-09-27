#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t, k, d;
	cin >> n >> t >> k >> d;

	int nthTime = n / k + (n % k == 0 ? 0 : 1);

	int totalTime = nthTime * t;

	int nth1 = (nthTime - 1) * t;

	if(d >= nth1)
		return cout << "NO", 0;

	if(nthTime == 1) return cout << "NO", 0;
	if(nthTime > 2) return cout << "YES", 0;

	if(d >= t)
		return cout << "NO", 0;
	else cout << "YES";


}