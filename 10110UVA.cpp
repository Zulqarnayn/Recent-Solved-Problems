#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, sq_n;
	while(cin >> n && n != 0){
		sq_n = sqrt(n);

		if(sq_n * sq_n == n)
			printf("yes\n");
		else printf("no\n");
	}
}