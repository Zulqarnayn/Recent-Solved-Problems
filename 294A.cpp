#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n;
	int a[n + 10];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	cin >> m;
	for(int i = 0 ; i < m; i++){
		int x, y;
		cin >> x >> y;
		int leftCount = y - 1;
		int rightCount = a[x] - y;
		if(x - 1 >= 1)
			a[x - 1] += leftCount;
		if(x + 1 <= n)
			a[x + 1] += rightCount;
		a[x] = 0;
	}
	
	for(int i = 1; i <= n; i++){
		cout << a[i] << endl;
	}

}