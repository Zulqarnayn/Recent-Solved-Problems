#include <bits/stdc++.h>
using namespace std;

#define lld long long int

int main()
{
	int q;
	scanf("%d", &q);
	while(q--){
		long long int n, m;
		scanf("%lld %lld", &n, &m);
		lld sol = 0;
		if(n < m ){
			printf("0\n");
			continue;
		}
		else if(n == m){
			sol = n % 10;
			printf("%lld\n", sol);
		}
		else {
			lld first = m % 10, val = m;
			lld cnt = 0;
			while(1){
				sol += val % 10;
				val += m;
				cnt++;
				if((val % 10) == first){
					break;
				}
				// cerr << val << "\n";
			}
			lld loop = m * cnt;
			// cerr << loop << "\n";

			lld rem = n % loop;
			lld div = n / loop;
			lld sum = div * sol;
			// cerr << rem << ' ' << div << ' ' << sum <<'\n';
			val = m;
			while(val <= rem){
				sum += val % 10;
				val += m;
			}
			printf("%lld\n", sum);

		}
	}	
}