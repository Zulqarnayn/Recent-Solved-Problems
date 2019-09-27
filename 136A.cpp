#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x;
	cin >> n;
	int ar[200];
	for(int i = 1; i <= n; i++){
		cin >> x;
		ar[x] = i;
	}
	for(int i = 1; i <= n; i++){
		printf("%d ", ar[i]);
	}
}