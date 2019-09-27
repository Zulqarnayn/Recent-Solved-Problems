#include <bits/stdc++.h>
using namespace std;

int find_gcd(int a, int b){

	if(b == 0)
		return a;
	return find_gcd(b, a % b);
}

int main(){
	int n;
	while(scanf("%d", &n)){
		if(n == 0) break;
		int ar[n + 2];

		for(int i = 0; i < n; i++)
			scanf("%d", ar + i);

		int total = (n * (n - 1)) / 2;

		int div_cnt = 0;

		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				int gcd = find_gcd(max(ar[i], ar[j]), min(ar[i], ar[j]));
				if(gcd == 1)
					div_cnt++;
			}
		}

		if(div_cnt == 0)
			printf("No estimate for this data set.\n");
		else {
			double pi = (1.0 * total * 6)/ (div_cnt * 1.0);
			pi = sqrt(pi);

			printf("%.6lf\n", pi);
		}
	}
}