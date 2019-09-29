#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	long long int sorted[n+2], random[n+2];
	int a[n+2];
	sorted[0] = 0;
	random[0] = 0;
	for(int i = 1; i <= n; i++){
		scanf("%d", a + i);
		random[i] = random[i-1] + a[i];
		// cerr << random[i] << ' ';
	}

	sort(a + 1, a + n + 1);

	for(int i = 1; i <= n; i++){
		sorted[i] = sorted[i-1] + a[i];
		// cerr << random[i] << ' ';
	}
	int m, type, l, r; 
	scanf("%d", &m);
	for(int i = 0; i < m; i++){
		scanf("%d%d%d", &type, &l, &r);
		if(type == 1)
			printf("%lld\n", random[r] - random[l - 1]);
		else 
			printf("%lld\n", sorted[r] - sorted[l - 1]);
	}
}