#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	long long int ar[1002][1002];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%lld",  &ar[i][j]);
		}
	}

	long long ans = ar[0][1] * ar[0][2];
	ans /= ar[1][2];

	cerr << ans << endl;

	ar[0][0] = sqrt(ans);
	printf("%lld ", ar[0][0]);
	for(int i = 1; i < n; i++){
		printf("%lld ", ar[0][i] / ar[0][0]);
	}



}