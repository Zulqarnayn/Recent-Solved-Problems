#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	long long int random[n+2];
	int a[n+2];
	random[0] = 0;
	for(int i = 1; i <= n; i++){
		scanf("%d", a + i);
		random[i] = random[i-1] + a[i];
		// cerr << random[i] << ' ';
	}

	int m, l, r; 
	scanf("%d", &m);
	for(int i = 0; i < m; i++){
		scanf("%d%d", &l, &r);
		printf("%lld\n", random[r+1] - random[l]);
	}
}