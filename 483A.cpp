#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }

int main()
{
	long long int a, b;
	cin >> a >> b;

	for(long long i = a; i <= b; i++){
		for(long long j = i + 1; j <= b; j++){
			for(long long k = j + 1; k <= b; k++){
				if(gcd(j, i) == 1 && gcd(k, j) == 1 && gcd(k, i) > 1){
					cout << i << ' ' << j << ' ' << k;
					return 0;
				}
			}
		}
	}
	cout << -1 << endl;
}