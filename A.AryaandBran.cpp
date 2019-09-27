#include <bits/stdc++.h>
using namespace std;

int n, k, taken, total;
int a[200];

int main(){
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++){
		scanf("%d", a+i);
	}
	for(int i = 0; i < n; i++){
		total += a[i];
		taken = min(total, 8);
		k -= taken;
		total -= taken;

		if(k <= 0) return printf("%d\n", i+1), 0; 
	}

	if(k <= 0) return printf("%d\n", n);
	else printf("-1\n");






}