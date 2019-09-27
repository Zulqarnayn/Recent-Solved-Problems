#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n + 10];
	int k_point, cnt = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	k_point = a[k - 1];

	for(int i = 0; i < n; i++){
		if(a[i] >= k_point && a[i] > 0)
			cnt++;
	}
	cout << cnt << endl;
}