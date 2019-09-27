#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n+2];
		for(int i = 0; i < n; i++){
			scanf("%d", a+i);
		}
		if(n == 1){
			printf("0\n");
			continue;
		}
		int curmin = a[n - 1], badDay = 0;
		for(int i = n - 1; i >= 0; i--){
			if(a[i] > curmin) badDay++;
			else curmin = a[i];
		}
		printf("%d\n", badDay);
	}
}