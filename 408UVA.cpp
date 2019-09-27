#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
    }
}



int main(){
	long long int seed, step, mod;
	while(scanf("%lld %lld", &step, &mod)){

		long long int _gcd = gcd(max(step, mod), min(mod, step));
		printf("%10lld%10lld", step, mod);
		if(_gcd == 1){
			printf("     %s\n\n", "Good Choice");
		}
		else {
			printf("     %s\n\n", "Bad Choice");
		}
			

	}
	
}

// 4 63923 99999