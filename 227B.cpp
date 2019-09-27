#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, q;
	long long vs = 0, pt = 0;
	scanf("%d", &n);

	int a[n + 2], dict[n + 2];

	for(int i = 1; i <= n; i++){
		scanf("%d", a + i);
		dict[a[i]] = i;
	}

	scanf("%d", &m);

	for(int i = 0; i < m; i++){
		scanf("%d", &q);

		vs += dict[q];
		pt += (n - dict[q] + 1);
		// cerr << vs <<' ' << pt << endl;
	}
	printf("%lld %lld\n", vs, pt);
}