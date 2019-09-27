#include <bits/stdc++.h>
using namespace std;

#define lld long long int

int main() {
	lld n, m, M;
	while(scanf("%lld%lld", &n, &m)){
		if(n == 0 || m == 0) break;
		M = m;
		lld _m = n - m;

		if(m < _m)
			swap(m, _m);

		lld varray[110], anarry[110];

		for(lld i = 1; i <= n; i++) varray[i] = 1;

		for(lld i = m + 1; i <= n; i++)
			varray[i] = i;

		for(lld i = 1; i <= _m; i++)
			anarry[i] = i;

		for(lld i = m + 1; i <= n; i++){
			for(lld j = 2; j <= _m; j++){
				// cerr <<i << ' ' <<j << endl;
				if(__gcd(anarry[j], varray[i]) > 1){
					cerr <<i << ' ' << j << ' ' << __gcd(anarry[j], varray[i]) << endl;
					lld val = __gcd(anarry[j], varray[i]);
					anarry[j] = anarry[j] / val;
					varray[i] = varray[i] / val;

					cerr << anarry[j] << ' ' << varray[i] << endl;
				}
			}
		}
		lld ans = 1;
		for(lld i = 1; i <= n; i++){
			cerr << varray[i] << endl;
			ans *= varray[i];
		}

		printf("%lld things taken %lld at a time is %lld exactly.\n", n, M, ans);


	}

}